#pragma once

#include "EFP.hpp"

#include <cassert>
#include <cstdint>

#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <ranges>
#include <print>
#include <stdexcept>

#include <Windows.h>

namespace efp::q37
{
    bool IsVowel(UChar ch)
    {
        return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

    UChar LetterCharToNumChar(UChar ch)
    {
        assert(IsVowel(ch) && "Non-vowel character is used as input!");

        switch (ch)
        {
        case 'A':
            return '4';

        case 'E':
            return '3';

        case 'I':
            return '1';

        case 'O':
            return '0';

        case 'U':
            return '6';

        default:
            throw std::logic_error("Non-vowel character is used as input!");
            return '\0';
        }
    }

    void Run(bool copy_to_clipboard = false, Integer64 generationCount = 1)
    {
        assert(generationCount > 0);

        if (generationCount < 1)
        {
            throw std::logic_error("The number of passwords to be generated is " + std::string{ generationCount == 0 ? "zero" : "negative" } + "!");
        }

        const std::vector<UChar> special_chars = { '!', '#', '$', '+', '-', '_', '^', '~' };

        Integer64 password_length_min = GetNumericInput<Integer64>("What's the minimum length? : ");
        Integer64 special_char_count  = GetNumericInput<Integer64>("How many special characters? : ");
        Integer64 number_count        = GetNumericInput<Integer64>("How many numbers? : "); 

        std::minstd_rand mrng(std::random_device{}());
        
        std::uniform_int_distribution<int> iDist(password_length_min, password_length_min * 2);
        std::uniform_int_distribution<int> charDist1('A', 'Z');
        std::uniform_int_distribution<int> charDist2('a', 'z');
        std::uniform_int_distribution<int> specialCharDist(0, special_chars.size() - 1);
        std::uniform_int_distribution<int> numberDist(0, 9);
        std::uniform_int_distribution<int> oddevenDist(0, 1);

        std::vector<std::string> passwords;

        const auto GeneratePassword = [&]() -> void
            {
                std::vector<UChar> passw;

                const size_t randomLength = iDist(mrng);

                std::uniform_int_distribution<int> vowelDist(0, randomLength);

                for (size_t i = 0u; i < special_char_count; ++i)
                {
                    passw.push_back(special_chars[specialCharDist(mrng)]);
                }
                for (size_t i = 0u; i < number_count; ++i)
                {
                    passw.push_back(numberDist(mrng) + '0');
                }
                for (size_t i = passw.size(); i < randomLength; ++i)
                {
                    UChar ch;

                    if (oddevenDist(mrng) == 0)
                    {
                        ch = charDist1(mrng);

                        if (IsVowel(ch) && vowelDist(mrng) % 8 == 0) // some randomness to convert vowels to numbers
                        {
                            ch = LetterCharToNumChar(ch);
                        }
                    }
                    else
                    {
                        ch = charDist2(mrng);
                    }

                    passw.push_back(ch);
                }

                std::ranges::shuffle(passw, mrng);

                passwords.emplace_back(passw.cbegin(), passw.cend());

                std::cout << passwords.back() << std::endl;
            };

        std::cout << "Your password " + std::string( generationCount == 1 ? "is" : "options are");
        std::println("");
        std::println("");

        if (generationCount == 1)
        {
            GeneratePassword();
        }
        else
        {
            for (size_t i = 0u; i < static_cast<size_t>(generationCount); ++i)
            {
                std::cout << "Index : " << i << " -> ";

                GeneratePassword();
            }
        }

        std::println("");

        if (copy_to_clipboard)
        {
            const auto CopyToClipboard = [&](size_t index)
                {
                    const auto& password = passwords[index];
                    const size_t passLen = password.length() + 1u;

                    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, passLen);

                    if (hMem == nullptr)
                    {
                        throw std::runtime_error("An error occured while copying the password to the clipboard!");
                    }

                    LPVOID pLock = GlobalLock(hMem);

                    if (pLock == nullptr)
                    {
                        throw std::runtime_error("An error occured while copying the password to the clipboard!");
                    }

                    std::memcpy(pLock, reinterpret_cast<const void*>(password.data()), passLen);

                    GlobalUnlock(hMem);
                    OpenClipboard(nullptr);
                    EmptyClipboard();
                    SetClipboardData(CF_TEXT, hMem);
                    CloseClipboard();
                };

            if (generationCount == 1)
            {
                CopyToClipboard(0);
            }
            else
            {
                Integer64 index = 0;
                bool indexIsInvalid = false;

                do
                {
                    index = GetNumericInput<Integer64>("Which indexed password would you like to copy to the clipboard? : ");

                    if (index < 0 || index >= passwords.size())
                    {
                        if (indexIsInvalid == false)
                        {
                            indexIsInvalid = true;
                        }

                        std::println("Please type in a correct index.");
                    }
                    else
                    {
                        indexIsInvalid = false;
                    }
                }
                while (indexIsInvalid);

                CopyToClipboard(index);
            }
        }
    }
}
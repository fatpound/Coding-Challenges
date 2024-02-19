#pragma once

#include <iostream>
#include <string>
#include <concepts>
#include <print>

namespace efp
{
    using Integer64 = std::int64_t;
    using UChar = std::uint8_t;

    template <typename T>
    concept Number = std::integral<T> || std::floating_point<T>;

    template <Number T>
    T GetNumericInput(const std::string& input_str)
    {
    start:

        T num = static_cast<T>(0);

        std::cout << input_str;
        std::cin >> num;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::println("Please enter a numerical value!");

            goto start;
        }

        return num;
    }
}

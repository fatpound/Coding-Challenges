#pragma once

#include "EFP.hpp"

#include <array>
#include <string>
#include <stdexcept>

namespace efp::q25
{
    class PasswordStrengthIndicator final
    {
    public:
        static void RunTest(const std::string& password)
        {
            const auto& index = passwordValidator_(password);

            if (index < 0 || index >= resultStrings_.size())
            {
                throw std::logic_error("Tried to access an index which is out of the bounds of the array!");
            }

            std::cout << "The password " << password << " is a " << resultStrings_[index] << " password.";
        }


    protected:


    private:
        static Integer64 passwordValidator_(const std::string& password)
        {
            const size_t passLen = password.length();

            Integer64 alphaCount = 0;
            Integer64 digitCount = 0;
            Integer64 punctCount = 0;

            for (const auto& ch : password)
            {
                if (std::isalpha(ch))
                {
                    ++alphaCount;
                }
                else if (std::isdigit(ch))
                {
                    ++digitCount;
                }
                else if (std::ispunct(ch))
                {
                    ++punctCount;
                }
            }

            if ((passLen == digitCount) && (passLen < 8u))
            {
                return 0;
            }

            if ((passLen == alphaCount) && (passLen < 8u))
            {
                return 1;
            }

            if ((punctCount == 0) && (passLen >= 8u))
            {
                return 2;
            }

            if ((alphaCount > 0) && (digitCount > 0) &&(punctCount > 0) && (passLen >= 8u))
            {
                return 3;
            }

            return 4;

            // The question is incomplete, there are other cases where the password can be different.
            // Should I complete the question?
        }


    private:
        static const std::array<std::string, 5> resultStrings_;
    };

    const std::array<std::string, 5> PasswordStrengthIndicator::resultStrings_ =
    {
        "very weak",
        "weak",
        "strong",
        "very strong",
        "unknown"
    };
}
#pragma once

#include "TMCC.hpp"

#include <cstdint>

#include <iostream>
#include <vector>
#include <string>
#include <type_traits>

using namespace std::literals::string_literals;

namespace fatpound::coding_challenges::tmcc::q23
{
    template <typename T, std::size_t ByteSize>
    concept RangedContainer = requires(T t)
    {
        { t.size()   };

        { t.begin()  };
        { t.end()    };
        { t.cbegin() };
        { t.cend()   };

        typename T::value_type;

        requires std::unsigned_integral<typename T::value_type>;

        requires sizeof(typename T::value_type) == ByteSize;
    };

    template <typename T>
    requires RangedContainer<T, 1u>
    auto IntToHexStr(const T& container, const bool& uppercase = true) -> std::string
    {
        static constexpr auto uppercase_hexlist = "0123456789ABCDEF";
        static constexpr auto lowercase_hexlist = "0123456789abcdef";

        const auto& hexlist = (uppercase ? uppercase_hexlist : lowercase_hexlist);

        std::string result{};

        result.reserve(container.size());

        for (const auto& item : container)
        {
            const auto& a = (item / 16) % 16;
            const auto& b = item % 16;
        
            result += hexlist[a];
            result += hexlist[b];
        }

        return result;
    }
    
    void Run();
}
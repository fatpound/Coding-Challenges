#pragma once

#include <cstdint>

#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <type_traits>

namespace fatpound::coding_challenges::tmcc::q23
{
    template <class C, std::size_t ValueType_Size>
    concept RangedContainer = requires(C cont)
    {
        { cont.size()   } -> std::convertible_to<std::size_t>;

        { cont.begin()  } -> std::input_or_output_iterator;
        { cont.end()    } -> std::input_or_output_iterator;
        { cont.cbegin() } -> std::input_or_output_iterator;
        { cont.cend()   } -> std::input_or_output_iterator;
        
        typename C::value_type;

        requires std::unsigned_integral<typename C::value_type>;

        requires sizeof(typename C::value_type) == ValueType_Size;
    };

    template <class C>
    concept RangedContainer_i8 = RangedContainer<C, 1ull>;

    template <RangedContainer_i8 C>
    auto Int8ToHexString(const C& container, const bool uppercase = true) -> std::string
    {
        std::ostringstream oss;

        if (uppercase)
        {
            oss.setf(std::ios_base::uppercase);
        }

        for (const auto& item : container)
        {
            oss << std::hex
                << std::setw(2)
                << std::setfill('0')
                << static_cast<std::uint16_t>(item);
        }

        return oss.str();
    }
    
    void Run();
}
#pragma once

#include "EFP.hpp"

namespace efp::q7
{
    void Run()
    {
        constexpr auto conversionFactor = 0.09290304;
        
        Integer64 roomLength = GetNumericInput<Integer64>("What is the length of the room in feet? : ");
        Integer64 roomWidth  = GetNumericInput<Integer64>("What is the  width of the room in feet? : ");

        std::println("");
        std::println("You entered dimensions of {0} feet by {1} feet.", roomLength, roomWidth);
        std::println("The area is");

        const auto sqFeet = roomLength * roomWidth;
        std::println("{} square feet", sqFeet);

        const auto sqMeters = sqFeet * conversionFactor;
        std::println("{:.3f} square meters", sqMeters);
    }
}
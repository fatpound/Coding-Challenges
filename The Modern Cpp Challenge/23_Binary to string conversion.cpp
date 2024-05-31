#include "23_Binary to string conversion.hpp"

namespace fatpound::coding_challenges::tmcc::q23
{
    void Run()
    {
        std::vector<std::uint8_t> v1 = { 0xBA, 0xAD, 0xF0, 0x0D };

        std::cout << Int8ToHexString(v1)        << std::endl;
        std::cout << Int8ToHexString(v1, false) << std::endl;

        std::vector<std::uint8_t> v2 = { 1, 2, 3, 4, 5, 6 };

        std::cout << Int8ToHexString(v2)        << std::endl;
        std::cout << Int8ToHexString(v2, false) << std::endl;
    }
}
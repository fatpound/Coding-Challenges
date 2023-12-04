#include <vector>
#include <numeric>
#include <functional>

class Solution
{
public:
    int xorBeauty(std::vector<int>& nums)
    {
        return std::accumulate(nums.cbegin(), nums.cend(), 0, std::bit_xor<int>());
    }
};

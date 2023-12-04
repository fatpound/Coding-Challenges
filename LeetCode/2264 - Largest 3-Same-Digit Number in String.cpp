// 04.12.2023

class Solution
{
public:
    std::string largestGoodInteger(std::string numStr)
    {
        int64_t index = -1;

        for (size_t i = 0; i < numStr.length(); ++i)
        {
            if (i + 2 < numStr.length() &&
                numStr[i + 1] == numStr[i] &&
                numStr[i + 2] == numStr[i])
            {
                if (index == -1 || numStr[i] > numStr[index])
                {
                    index = i;
                }

                i += 2;
            }
        }

        return index == -1
            ? std::string()
            : std::string(numStr.cbegin() + index, numStr.cbegin() + index + 3)
            ;
    }
};

#include <vector>
#include <string>
#include <array>

class Solution
{
public:
    void generateTelephoneLetters(const std::string& digits, std::string str, int num_index, std::vector<std::string>& output)
    {
        if (num_index == digits.length())
        {
            output.push_back(str);
            return;
        }

        const auto letters = words[digits[num_index] - '0'];

        for (int i = 0; i < letters.length(); i++)
        {
            generateTelephoneLetters(digits, str + letters[i], num_index + 1, output);
        }
    }

    std::vector<std::string> letterCombinations(std::string digits)
    {
        std::vector<std::string> output;
        
        if (digits.length() > 0)
        {
            generateTelephoneLetters(digits, std::string(), 0, output);
        }

        return output;
    }


private:
    std::array<std::string, 10> words = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
};

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

namespace fatpound::compression
{
	class BWT
	{
	public:
		static std::string bwTransform(std::string input)
		{
			std::string output;

			if (input.length() > 1)
			{
				std::vector<std::string> rotations;

				for (size_t i = 0ui64; i < input.length(); ++i)
				{
					rotations.push_back(input);
					std::rotate(input.begin(), input.begin() + 1, input.end());
				}

				std::sort(
					rotations.begin(),
					rotations.end(),
					[](const std::string& str1, const std::string& str2) -> bool
					{
						return str1 < str2;
					}
				);


				for (auto& str : rotations)
				{
					output += str.back();
				}
			}

			return output;
		}
	};
}

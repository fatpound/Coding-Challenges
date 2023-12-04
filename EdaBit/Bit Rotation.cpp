// https://edabit.com/challenge/NgtAmTiF3sg4X2D38

#include <cmath>
#include <limits>

size_t bitRotate(size_t n, size_t m, bool d)
{
	if (n == 0ui64)
	{
		return n;
	}

	const size_t byteSize = std::numeric_limits<size_t>::digits;
	const size_t bitcount = static_cast<size_t>(std::log2(static_cast<double>(n)));
	
	if (d)
	{
		while (m-- > 0)
		{
			const bool lsb = ((n % 2 == 0) ? false : true);

			n >>= 1;

			if (lsb)
			{
				n |= (1ui64 << bitcount);
			}
		}
	}
	else
	{
		while (m-- > 0)
		{
			const bool leftbit = (((n & (1ui64 << bitcount)) == 0ui64) ? false : true);

			n <<= 1;

			if (bitcount + 1 < byteSize)
			{
				n &= ((1ui64 << (bitcount + 1ui64)) - 1ui64);
			}

			if (leftbit)
			{
				n |= 1ui64;
			}
		}
	}

	return n;
}

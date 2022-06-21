#include <stdio.h>
#include <conio.h>

int bitcom(unsigned int x, unsigned int y)
{
	unsigned int z = (1U << 31);
	
	if (x ^ y)
	{
		while (!((x & z) ^ (y & z)))
		{
			z >>= 1;
		}
		
		return (x & z ? 1 : -1);
	}
	
	return 0;
}

int main()
{
	unsigned int x, y;
	
	scanf("%u%u", &x, &y);
	
	printf("%d", bitcom(x, y));
	
	getch();
	return 0;
}

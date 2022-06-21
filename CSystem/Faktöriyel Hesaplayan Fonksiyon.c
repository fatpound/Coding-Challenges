#include <stdio.h>
#include <conio.h>

unsigned int factorial(unsigned int x)
{
	return (x > 1 ? (x * factorial(x - 1)) : 1);
}

int main()
{
	unsigned int k;
	
	for (k = 0; k < 14; ++k)
	{
		printf("%u! = %u%s", k, factorial(k), k != 13 ? "\n" : "");
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

unsigned int ROL(unsigned int x, int n)
{
	int i = 0;
	
	while (i++ < n)
	{
		x = (x << 1) | ((x & (1U << 31)) ? 1 : 0);
	}
	
	return (x);
}

unsigned int ROR(unsigned int x, int  n)
{
	int i = 0;
	
	while (i++ < n)
	{
		x = (x >> 1) | ((x & 1) ? (1U << 31) : 0);
	}
	
	return (x);
}

int main()
{
	unsigned int x, r;
	
	scanf("%u%u", &x, &r);
	printf("%u\n\n", ROL(x, r));
	
	scanf("%u%u", &x, &r);
	printf("%u", ROR(x, r));

	getch();
	return 0;
}

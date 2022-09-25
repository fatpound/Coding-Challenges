#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (!(n & 1) || n % 3 == 0) return 0;
	
	int i;
	
	for (i = 5; i * i < n + 1; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int IsBad(unsigned int n)
{
	unsigned int i, count = 0;
	
	for (i = 1ULL << 31; i; i >>= 1)
	{
		if (n & i)
			count++;
	}
	
	return (!(count & 1));
}

int main()
{
	unsigned int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsBad(n))
		{
			printf("%u\n", n);
		}
	}
	
	getch();
	return 0;
}

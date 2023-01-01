#include <stdio.h>
#include <conio.h>
#include <math.h>

#define U64 unsigned long long

U64 int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (n % 2 == 0 || n % 3 == 0) return 0;
	
	U64 int i;
	
	for (i = 5; i * i < n + 1; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	U64 int i, x = 600851475143ULL, max = 1;
	
	for (i = 3; i < ((int) sqrt(x)); i += 2)
	{
		if (IsPrime(i) && ((x % i) == 0))
		{
			max = i;
		}
	}
	
	printf("Largest prime factor is = %llu", max); // An update is coming...
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int Factorial(int x)
{
	return (x ? x * Factorial(x - 1) : 1);
}

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

int IsWilsonPrime(int n)
{
	return (IsPrime(n) ? ((Factorial(n - 1) + 1) % (n * n) == 0) : 0);
}

int main()
{
	int n;
	
	for (n = 3; n < 14; n += 2)
	{
		if (IsWilsonPrime(n))
		{
			printf("%d\n", n);
		}
	}
	
	// 563
	
	getch();
	return 0;
}

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

int IsIsolatedPrime(int n)
{
	return (IsPrime(n) && !IsPrime(n - 2) && !IsPrime(n + 2));
}

int main()
{
	int n;
	
	for (printf("2"), n = 3; n < 1000; n += 2)
	{
		if (IsIsolatedPrime(n))
		{
			printf("\n%d", n);
		}
	}
	
	getch();
	return 0;
}

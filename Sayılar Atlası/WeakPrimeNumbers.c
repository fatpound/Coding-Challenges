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

int PrevNextPrime(int x, int mode)
{
	while (!IsPrime(x += mode ? 1 : -1));
	
	return (x);
}

int IsWeakPrime(int n)
{
	return (IsPrime(n) ? (((PrevNextPrime(n, 0) + PrevNextPrime(n, 1)) / 2) > n) : 0);
}

int main()
{
	int n;
	
	for (printf("3"), n = 7; n < 1000; n++)
	{
		if (IsWeakPrime(n))
		{
			printf("\n%d", n);
		}
	}
	
	getch();
	return 0;
}

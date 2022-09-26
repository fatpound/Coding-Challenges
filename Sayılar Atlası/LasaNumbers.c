#include <stdio.h>
#include <conio.h>

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

int RevNum(int x)
{
	return (x ? (x % 10) * (Power(10, DigitCount(x) - 1)) + RevNum(x / 10) : 0);
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

int IsLasa(int n)
{
	return (n % 10 == 0 ? 0 : (IsPrime(n) && IsPrime(RevNum(n))));
}

int main()
{
	int n;
	
	for (n = 11; n < 10000; n += 2)
	{
		if (IsLasa(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

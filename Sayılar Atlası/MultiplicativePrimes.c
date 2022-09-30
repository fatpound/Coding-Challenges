#include <stdio.h>
#include <conio.h>

int DigitProd(int value)
{
	return (value > 0 ? ((value % 10) * DigitProd(value / 10)) : 1);
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

int IsMultiplicativePrime(int n)
{
	return (IsPrime(n) ? IsPrime(DigitProd(n)) : 0);
}

int main()
{
	int n;
	
	for (printf("2"), n = 3; n < 10000; n += 2)
	{
		if (IsMultiplicativePrime(n))
		{
			printf("\n%d", n);
		}
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int DigitCount(int x)
{
	if (x > 0) return (1 + DigitCount(x / 10));

	return 0;
}

int IntPow(int x, int n)
{
	return (n > 1 ? (IntPow(x, n - 1) * x) : 1);
}

int RevNum(int x)
{
	return (x ? (x % 10) * (IntPow(10, DigitCount(x))) + RevNum(x / 10) : 0);
}

int IsPrime(int x)
{
	int i;

	if (x < 2) return 0;

	for (i = 2; i * i < (x + 1); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int i;

	for (i = 101; i < 1000; i++) // abc
	{
		if (i % 5 == 0) continue;

		if ((RevNum(i) > i) && IsPrime(i) && IsPrime(RevNum(i)) && IsPrime(i / 10) && IsPrime(RevNum(i / 10)) && IsPrime(i % 100) && IsPrime(RevNum(i % 100))) printf("%d\n", i);
	}

	getch();
	return 0;
}

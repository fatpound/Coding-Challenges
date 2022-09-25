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

int IsBreach(int n)
{
	return (n % ((n / Power(10, DigitCount(n) - 1)) * 10 + (n % 10)) == 0 ? 1 : 0);
}

int main()
{
	int n;
	
	for (n = 100; n < 1000; n++)
	{
		if (IsBreach(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

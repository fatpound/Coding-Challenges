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

int IsHighlyNarcissistic(int n)
{
	int i, j = DigitCount(n), count, on = 1, sum = 0;
	
	for (i = 0, count = j; i < j; i++, count--, on *= 10)
	{
		sum += Power((n / on) % 10, count);
	}
	
	return (sum == n);
}

int main()
{
	int n;
	
	for (n = 1; n < 10000000; n++)
	{
		if (IsHighlyNarcissistic(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

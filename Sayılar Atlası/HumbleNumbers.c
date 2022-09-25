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

int IsHumble(int n)
{
	if (n % 10 == 0) return 0;
	
	int a, b, i, j, k;
	
	for (k = Power(10, (j = DigitCount(n)) - 1), i = 0; i < j - 1; i++, k /= 10)
	{
		a = n / k;
		b = n % k;
		
		if (n % b == a)
		{
			return 1;
		}
	}
	
	return 0;
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsHumble(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

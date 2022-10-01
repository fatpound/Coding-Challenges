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

int IsKaprekar(int n)
{
	if (n % 10 == 0) return 0;
	
	int a, b, i, j, k, sqr = n * n;
	
	for (k = Power(10, (j = DigitCount(sqr)) - 1), i = 0; i < j - 1; i++, k /= 10)
	{
		a = sqr / k;
		b = sqr % k;
		
		if (a + b == n)
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
		if (IsKaprekar(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

#define MIN(x, y) (x > y ? y : x)
#define MAX(x, y) (x > y ? x : y)

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

int IsSurprising(int n)
{
	if (n % 10 == 0) return 0;
	
	int a, b, i, j, k, min, max;
	
	for (k = Power(10, (j = DigitCount(n)) - 1), i = 0; i < j - 1; i++, k /= 10)
	{
		a = n / k;
		b = n % k;
		
		min = MIN(a, b);
		max = MAX(a, b);
		
		min--;
		
		if ((max * (max + 1) / 2 - min * (min + 1) / 2) == n)
		{
			return 1;
		}
	}
	
	return 0;
}

int main()
{
	int n;
	
	for (n = 1; n < 100000; n++)
	{
		if (IsSurprising(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

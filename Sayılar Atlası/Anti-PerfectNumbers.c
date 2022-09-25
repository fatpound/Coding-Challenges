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

int IsAntiPerfect(int n)
{
	int i, j, k, on1, on2, sum = 0;
	
	for (k = 1; k < n; k++)
	{
		if (n % k == 0)
		{
			if (k < 10)
			{
				sum += k;
			}
			else
			{
				on1 = 1;
				on2 = Power(10, (j = DigitCount(k)) - 1);
				
				for (i = 0; i < j; i++, on1 *= 10, on2 /= 10)
				{
					sum += ((k / on1) % 10) * on2;
				}
			}
		}
	}
	
	return (sum == n);
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsAntiPerfect(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

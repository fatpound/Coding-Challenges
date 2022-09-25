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

int IsEnlightened(int n)
{
	if (IsPrime(n)) return 0;
	
	int i, j, k = n, on1, on2 = Power(10, DigitCount(n) - 1), flag = 0;
	
	for (i = 2; i <= n; i++, flag = 0)
	{
		if (IsPrime(i))
		{
			while ((n % i) == 0)
			{
				if (!flag)
					flag = 1;
				
				n /= i;
			}
			
			if (flag)
			{
				for (on1 = Power(10, DigitCount(i) - 1), j = 0; j < DigitCount(i); j++, on1 /= 10, on2 /= 10)
				{
					if (((i / on1) % 10) != ((k / on2) % 10))
					{
						return 0;
					}
					
					k %= on2;
				}
			}
		}
	}
	
	return 1;
}

int main()
{
	int n;
	
	for (n = 1; n < 120000; n++)
	{
		if (IsEnlightened(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

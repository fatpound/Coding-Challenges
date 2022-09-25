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

int IsNoble(int n)
{
	int i, j, k, sum = 0;
	
	for (k = Power(10, (j = DigitCount(n)) - 1), i = 0; i < j - 1; i++, k /= 10, sum = 0)
	{
		sum += n / k;
		sum += n % k;
		
		if (!IsPrime(sum))
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int n;
	
	for (n = 10; n < 1000; n++)
	{
		if (IsNoble(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int DigitSum(int value)
{
	return (value > 0 ? (value % 10 + DigitSum(value / 10)) : 0);
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

int SumOfPrimeDivsDigits(int n)
{
	int i, sopd = 0;
	
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			while ((n % i) == 0)
			{
				sopd += DigitSum(i);
				n /= i;
			}
		}
	}
	
	return (sopd);
}

int IsSmith(int x)
{
	return (IsPrime(x) ? 0 : (DigitSum(x) == SumOfPrimeDivsDigits(x)));
}

int main()
{
	int n;
	
	for (n = 1; n < 10000; n++)
	{
		if (IsSmith(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (n % 2 == 0 || n % 3 == 0) return 0;
	
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

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int DigitCount(int n)
{
	return (n > 0 ? (1 + DigitCount(n / 10)) : 0);
}

int IsTruncatable(int n, int mode)
{
	while ((mode ? (n /= 10) : (n %= Power(10, DigitCount(n) - 1))) > 0)
	{
		if (!IsPrime(n))
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int i, count = 0, sum = 0;
	
	for (i = 7; count <= 11; i += 2)
	{
		if (IsPrime(i) && IsTruncatable(i, 0) && IsTruncatable(i, 1))
		{
			printf("%d\n", i);
			count++;
			sum += i;
		}
	}
	
	printf("\nsum = %d", sum);
	
	getch();
	return 0;
}

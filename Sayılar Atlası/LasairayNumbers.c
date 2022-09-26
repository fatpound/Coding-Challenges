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

int RevNum(int x)
{
	return (x ? (x % 10) * (Power(10, DigitCount(x) - 1)) + RevNum(x / 10) : 0);
}

int AllDigitsSame(int n)
{
	int i, count = DigitCount(n);
	int d[count];
	
	for (i = count - 1; i >= 0; d[i--] = n % 10, n /= 10);
	
	for (i = 1; i < count; i++)
	{
		if (d[0] != d[i])
		{
			return 0;
		}
	}
	
	return 1;
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

int IsHalfPrime(int n)
{
	if (IsPrime(n)) return 0;
	
	int i, j = n, count = 0, flag = 0;
	
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			while ((n % i) == 0)
			{
				if (!flag)
					flag = 1;
				
				count++;
				
				n /= i;
			}
		}
		
		if (flag)
			flag = 0;
	}
	
	return (count == 2);
}

int IsLasairay(int n)
{
	return (n % 10 == 0 || AllDigitsSame(n) ? 0 : (IsHalfPrime(n) && IsHalfPrime(RevNum(n))));
}

int main()
{
	int n;
	
	for (n = 15; n < 10000; n++)
	{
		if (IsLasairay(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

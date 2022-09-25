#include <stdio.h>
#include <conio.h>

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

int main()
{
	int n;
	
	for (n = 2; n < 100; n++)
	{
		if (IsHalfPrime(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

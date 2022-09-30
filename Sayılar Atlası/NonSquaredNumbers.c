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

int IsNonSquared(int n)
{
	if (IsPrime(n)) return 1;
	
	int i, count;
	
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			count = 0;
			
			while ((n % i) == 0)
			{
				if (++count > 1)
				{
					return 0;
				}
				
				n /= i;
			}
		}
	}
	
	return 1;
}

int main()
{
	int n;
	
	for (n = 2; n < 100; n++)
	{
		if (IsNonSquared(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

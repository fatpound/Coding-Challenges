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

int IsStormer(int n)
{
	int i, k = n, greatest, flag = 0;
	
	n *= n;
	n++;
	
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			while ((n % i) == 0)
			{
				if (!flag)
				{
					flag = 1;
					greatest = i;
				}
				
				n /= i;
			}
			
			if (flag)
				flag = 0;
		}
	}
	
	return (greatest >= 2 * k);
}

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		if (IsStormer(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

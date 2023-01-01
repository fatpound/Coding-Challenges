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

int IsDistinct(int n, int x)
{
	int i, count = 0, flag;
	
	for (i = 2; i <= n; i += (i == 2 ? 1 : 2))
	{
		if (IsPrime(i))
		{
			flag = 0;
			
			while ((n % i) == 0)
			{
				flag = 1;
				n /= i;
			}
			
			if (flag)
			{
				count++;
			}
		}
	}
	
	return (count == x);
}

int main()
{
	int n = 646;
	
	while (n++) // Brute-forcing...
	{
		if (IsDistinct(n, 4) && IsDistinct(n + 1, 4) && IsDistinct(n + 2, 4) && IsDistinct(n + 3, 4))
		{
			break;
		}
	}
	
	printf("%d", n);
	
	return (!getch());
}

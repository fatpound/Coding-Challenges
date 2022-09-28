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

int NthPrime(int n)
{
	if (n < 1) return 0;
	
	int i = 1, c = 0;
	
	while (++i)
	{
		if (IsPrime(i)) c++;
		if (c == n) break;
	}
	
	return (i);
}

int IsCompozite(int n)
{
	if (IsPrime(n)) return 0;
	
	int i, j = n, repeat = 0, count = 0, flag = 0;
	
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			while ((n % i) == 0)
			{
				if (repeat)
					return 0;
				
				if (!flag)
					flag = 1;
				
				n /= i;
				repeat = 1;
			}
			
			if (flag)
				count++;
		}
		
		if (flag)
			flag = 0;
		
		if (repeat)
			repeat = 0;
	}
	
	return (count > 1);
}

int main()
{
	int i, j, k, p, ans, flag = 0;
	
	for (i = 3; i < 10000; i += 2)
	{
		if (IsCompozite(i))
		{
			for (p = NthPrime(j = 1); p <= i - 2; p = NthPrime(++j))
			{
				for (k = 1, ans = p + 2 * k * k; ans <= i; k++, ans = p + 2 * k * k)
				{
					if (ans == i)
					{
						flag = 1;
					}
				}
			}
			
			if (flag) flag = 0;
			else
			{
				printf("%d", i);
				break;
			}
		}
	}
	
	getch();
	return 0;
}

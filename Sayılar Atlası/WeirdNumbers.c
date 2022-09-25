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

int IsWeird(int n)
{
	int i, j, d[2] = {0}, k = n, flag = 0;
	
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			while ((n % i) == 0)
			{
				d[i & 1 ? 0 : 1] += i;
				
				n /= i;
			}
		}
	}
	
	return (d[0] == d[1]);
}

int main()
{
	int n;
	
	for (n = 72; n < 200000; n += 2)
	{
		if (IsWeird(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

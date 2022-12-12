#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (n % 2 == 0 || n % 3 == 0) return 0;
	
	int i;
	
	for (i = 5; i * i <= n; i += 6)
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

int main()
{
	int i, j, prod = 1;
	int d[20] = {0};
	
	for (i = 2; i <= 20; i++)
	{
		int temp = i;
		
		for (j = 2; j <= temp; j += (j == 2 ? 1 : 2))
		{
			if (IsPrime(j))
			{
				int count = 0;
				
				while (temp % j == 0)
				{
					count++;
					temp /= j;
				}
				
				if (count > d[j - 1])
				{
					d[j - 1] = count;
				}
			}
		}
	}
	
	for (i = 0; i < 20; i++)
	{
		if (d[i])
		{
			prod *= Power(i + 1, d[i]);
		}
	}
	
	printf("%d", prod);
	
	return !_getch();
}

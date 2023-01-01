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

int main()
{
	int i = 0, j, n;
	
	while (++i)
	{
		int temp = n = i * (i + 1) / 2;
		int prod = 1;
		
		for (j = 2; j <= temp; j += (j == 2 ? 1 : 2))
		{
			if (temp % j == 0)
			{
				int count = 0;
				
				while (temp % j == 0)
				{
					count++;
					temp /= j;
				}
				
				if (count > 0)
				{
					prod *= count + 1;
				}
			}
		}
		
		if (prod > 500)
		{
			printf("%d", n);
			break;
		}
	}
	
	return !_getch();
}

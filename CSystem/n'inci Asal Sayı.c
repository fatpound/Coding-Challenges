#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (!(n & 1) || n % 3 == 0) return 0;
	
	int i, j = n + 1;
	
	for (i = 5; i * i < j; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int nprime(int n)
{
	if (n < 2) return (n == 1);
	
	int i = 2, j = (n == 1);
	
	while (++i)
	{
		if (IsPrime(i))
		{
			j++;
		}
		
		if (j == n) break;
	}
	
	return (i);
}

int main()
{
	printf("%d", nprime(4));
	
	getch();
	return 0;
}

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

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsPrime(4 * n + 1))
		{
			printf("%d\n", 4 * n + 1);
		}
	}
	
	getch();
	return 0;
}

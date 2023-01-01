#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (n % 2 == 0 || n % 3 == 0) return 0;
	
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
	int i = 0, j = 0;
	
	while (++i)
	{
		if (IsPrime(i)) j++;
		if (j == n) break;
	}
	
	return (i);
}

int main()
{
	printf("%d", NthPrime(10001));
	
	getch();
	return 0;
}

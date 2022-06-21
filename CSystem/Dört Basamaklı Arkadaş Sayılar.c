#include <stdio.h>
#include <conio.h>

int isPrime(int x)
{
	int i;
	
	if (x < 2) return 0;
	
	for (i = 2; i <= (x >> 1); i = -~i) if (x % i == 0) return 0;
	
	return 1;
}

int SumOfDivs(int x)
{
	int i, sod = 0;
	
	for (i = 1; i < x; i++)
	{
		if (x % i == 0) sod += i;
	}
	
	return (sod);
}

int are_friends(int x, int y)
{
	return (SumOfDivs(x) == y && SumOfDivs(y) == x ? 1 : 0);
}

int main()
{
	int i, j;
	
	for (i = 1000; i < 7000; i++)
	{
		if (isPrime(i)) continue;
		
		for (j = i; j < 7000; j++)
		{
			if (isPrime(j)) continue;
			
			if (are_friends(i, j))
			{
				printf("%d - %d\n", i, j);
				i = j;
			}
		}
	}
	
	getch();
	return 0;
}


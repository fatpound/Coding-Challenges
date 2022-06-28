#include <stdio.h>
#include <conio.h>

int SumOfDivs(int n)
{
	int i, sod = 0;
	
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sod += i;
		}
	}
	
	return (sod);
}

int are_friends(int x, int y)
{
	return (SumOfDivs(x) == y && SumOfDivs(y) == x ? 1 : 0);
}

int main()
{
	int i, sum = 0;
	
	for (i = 200; i < 10000; i++)
	{
		if (are_friends(i, SumOfDivs(i)) && (i != SumOfDivs(i)))
		{
			printf("%d %d\n", i, SumOfDivs(i));
			
			sum += i;
			sum += SumOfDivs(i);
			
			if (i < SumOfDivs(i))
			{
				i = SumOfDivs(i);
			}
		}
	}
	
	printf("\nSum = %d", sum);
	
	getch();
	return 0;
}

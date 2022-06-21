#include <stdio.h>
#include <conio.h>

int sum_factors(int value)
{
	int i, sum = 1 ;
	
	for (i = 2; i < value; i++)
	{
		if (!(value % i))
		{
			sum += i;
		}
	}
	
	return (sum);
}

int main()
{
	int k;
	
	for (k = 1200; k <= 1250; k++)
	{
		printf("%d sayisinin carpanlari toplami = %d%s", k, sum_factors(k), k != 1250 ? "\n" : "");
	}
	
	getch();
	return 0;
}

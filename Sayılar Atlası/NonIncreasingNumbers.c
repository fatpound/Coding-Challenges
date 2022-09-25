#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

int IsRevSorted(int *d, int n)
{
	int i;
	
	for (i = 0; i < n - 1; i++)
	{
		if (d[i] < d[i + 1])
		{
			return 0;
		}
	}
	
	return 1;
}

int IsNonIncreasing(int n)
{
	int j = DigitCount(n), on = 1, end = 0, *d = NULL;
	
	d = (int*) malloc(sizeof(int) * j--);
	
	for (; j >= 0; on *= 10)
	{
		d[j--] = (n / on) % 10;
	}
	
	end = IsRevSorted(d, DigitCount(n));
	
	free(d);
	
	return (end);
}

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		if (IsNonIncreasing(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

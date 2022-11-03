#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

int IsB(int *d, int n)
{
	int i, flag1 = 0, flag2 = 0;
	
	for (i = 0; i < n - 1; i++)
	{
		if (d[i] > d[i + 1] && !flag1)
		{
			flag1 = 1;
		}
		
		if (d[i] < d[i + 1] && !flag2)
		{
			flag2 = 1;
		}
		
		if (flag1 && flag2)
		{
			return 1;
		}
	}
	
	return 0;
}

int IsBouncy(int n)
{
	int j = DigitCount(n), on = 1, end = 0, *d = NULL;
	
	d = (int*) malloc(sizeof(int) * j--);
	
	while (j >= 0)
	{
		d[j--] = (n / on) % 10;
		on *= 10;
	}
	
	end = IsB(d, DigitCount(n));
	
	free(d);
	
	return (end);
}

int main()
{
	int n = 101, count = 0;
	
	do
	{
		if (IsBouncy(n++))
		{
			count++;
		}
	}
	while ((double)(count * 100) / n < 99);
	
	printf("%d", n);
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SWAP(x, y) (x == y ? 0 : (x ^= y ^= x ^= y))

int DigitCount(int value)
{
	return (value > 0 ? (1 + DigitCount(value / 10)) : 0);
}

int IsKeith(int n)
{
	int i, j = DigitCount(n), on = 1, sum = 0, flag, *d = NULL;
	
	d = (int*) malloc(sizeof(int) * j--);
	
	for (; j >= 0; on *= 10)
	{
		sum += d[j--] = (n / on) % 10;
	}
	
	j = DigitCount(n) - 1;
	
	while (sum < n)
	{
		for (flag = 1, i = 0; i < j; i++)
		{
			if (flag)
				SWAP(d[i], d[i + 1]);
			else
				sum += d[i];
			
			if (i == j - 1 && flag)
			{
				flag = 0;
				d[++i] = sum;
				i = -1;
			}
		}
	}
	
	free(d);
	
	return (sum == n);
}

int main()
{
	int n;
	
	for (n = 10; n < 2000; n++)
	{
		if (IsKeith(n))
		{
			printf("%d\n", n);
		}
	}
	
	getch();
	return 0;
}

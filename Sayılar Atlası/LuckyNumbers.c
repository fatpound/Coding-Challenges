#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SWAP(x, y) (x == y ? 0 : (x ^= y ^= x ^= y))

void RotateZeros(int *d, int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		if (!d[i])
		{
			for (j = i; j < n - 1; j++)
			{
				SWAP(d[j], d[j + 1]);
			}
		}
	}
}

int main()
{
	int x = 100;
	
	int i, j, k = 1, d[x];
	
	for (i = 0; i < x; i++)
	{
		d[i] = i * 2 + 1;
	}
	
	while ((i = d[k]) && (d[k] * 2 < x))
	{
		for (j = i; j < x; j += i)
		{
			d[j - 1] = 0;
		}
		
		k++;
		RotateZeros(d, x);
	}
	
	for (i = 0; i < x; d[i] ? printf("%d ", d[i++]) : (i = x));
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int IsAbundant(int n)
{
	int i, sum = 0;
	
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	
	return (sum > n);
}

int main()
{
	int i, j, n, count = 0, sum = 0, *a = NULL, *s = NULL;
	
	for (n = 1; n <= 28123; n++)
	{
		if (IsAbundant(n))
		{
			count++;
			(a = (int*)(a ? realloc(a, sizeof(int) * count) : malloc(sizeof(int) * count)))[count - 1] = n;
		}
	}
	
	for (s = (int*) malloc(sizeof(int) * (28123 + !(i = 0))); i < count; i++)
	{
		for (j = i; j < count; j++)
		{
			if (a[i] + a[j] <= 28123)
			{
				s[a[i] + a[j]] = 1;
			}
			else break;
		}
	}
	
	for (i = 1; i <= 28123; i++)
	{
		if (!s[i])
		{
			sum += i;
		}
	}
	
	printf("%d", sum);
	
	return (!getch());
}

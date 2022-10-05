#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define U64 unsigned long long

void PascalTriangle(U64 int *d, int n)
{
	U64 int i, L, right;
	
	for (i = 0, L = 1; i < n * (n + 1) / 2; i++)
	{
		right = L * (L + 1) / 2;
		
		if ((i == right - 1) || (i == right - L))
		{
			d[i] = 1;
			
			if (i == right - 1)
			{
				L++;
			}
		}
		else
		{
			d[i] = d[i - L] + d[i - L + 1];
		}
	}
}

int main()
{
	U64 int i, j, n, line = 1, right, *d = NULL;
	
	printf("pascal ucgeni kac satir olsun? > ");
	scanf("%llu", &n);
	
	PascalTriangle(d = (U64 int*) malloc((n * (n + 1) / 2) * sizeof(U64 int)), n);
	
	for (printf("\n"), i = 0; i < n * (n + 1) / 2; i++)
	{
		right = line * (line + 1) / 2;;
		
		printf("%llu%s", d[i], i == right - 1 ? (line++, i != n * (n + 1) / 2 - 1 ? "\n" : "") : " ");
	}
	
	free(d);
	
	getch();
	return 0;
}

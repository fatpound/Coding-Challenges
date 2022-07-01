#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SWAP_P(x, y) (*x == *y ? 0 : (*x ^= *y ^= *x ^= *y))

void SelectionSort(int *d, int n) // O(n * n)
{
	int index, j, min;
	
	for (index = 0; index < n - 1; index++)
	{
		for (j = index + 1, min = index; j < n; j++)
		{
			if (d[min] > d[j])
			{
				min = j;
			}
		}
		
		SWAP_P(&d[index], &d[min]);
	}
}

void topla(int *d, int n)
{
	int i, flag;
	
	SelectionSort(d, n);
	
	printf("\nen kucuk dort elemanin toplami = %d", d[0] + d[1] + d[2] + d[3]);
}

int main()
{
	srand(time(0));
	
	int i, x, *d;
	
	printf("kac sayilik dizi olusturmak istiyorsunuz? > ");
	scanf("%d", &x);
	
	d = malloc(4 * x);
	
	for (i = 0; i < x; i++)
	{
		printf("%s%d. sayiyi giriniz > ", i ? "" : "\n", i + 1);
		scanf("%d", &d[i]);
	}
	
	topla(d, x);
	
	getch();
	return 0;
}

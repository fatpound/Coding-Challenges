#include <stdio.h>
#include <conio.h>

#define SWAP_P(x, y) (*x == *y ? 0 : (*x ^= *y ^= *x ^= *y))

void SelectionSort(int *d, int n) // O(n * n)
{
	int index, j, min;
	
	for (index = 0; index < n - 1; index++)
	{
		for (j = index + 1, min = index; j < n; j++)
		{
			if (d[min] < d[j])
			{
				min = j;
			}
		}
		
		SWAP_P(&d[index], &d[min]);
	}
}

int main()
{
	int i, j, d[100], gecici, x;
	
	for (i = 0; i < 100; i++)
	{
		printf("%slutfen %d. sayiyi giriniz: ", i ? "\n" : "", i + 1);
		
		scanf("%d", &d[i]);
	}
	
	printf("\n");
	
	SelectionSort(d, 100);
	
	for (i = 0; i < 100; i++)
	{
		printf("%d%s", d[i], i != 99 ? " > " : "");
	}
	
	getch();
	return 0;
}

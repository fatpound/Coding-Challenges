#include <stdio.h>
#include <conio.h>

#define SWAP_P(x, y) (*x == *y ? *x = *y : (*x ^= *y ^= *x ^= *y))

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

int main()
{
	int i, d[3] = { 0 };
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &d[i]);
	}
	
	SelectionSort(d, 3);
	
	printf("%d %s %d %s %d", d[0], d[0] == d[1] ? "==" : "<", d[1], d[1] == d[2] ? "==" : "<", d[2]);
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

#define SWAP_P(x, y) (*x == *y ? 0 : (*x ^= *y ^= *x ^= *y))
#define SWAP(x, y) (x == y ? 0 : (x ^= y ^= x ^= y))

#define SIZE 10

void SelectionSort(int *d,/**/ int x, /**/int n) // O(n * n)
{
	int index = x/*0*/, j, min;
	
	for (; index < n - 1; index++)
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
	int i, tek, a[SIZE] = { 3, 8, 12, 30, 56, 35, 78, 31, 69, 40 };
	
	for (i = 0, tek = (a[0] & 1) ? 1 : 0; i < SIZE; i++)
	{
		if ((a[i] & 1) && i)
		{
			SWAP(a[i], a[tek]);
			
			tek++;
		}
	}
	
	SelectionSort(a, 0, tek);
	SelectionSort(a, tek, SIZE);
	
	/*
		SelectionSort(a, tek);
		SelectionSort(&a[tek], SIZE - tek);
	*/
	
	for (i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d%s", i, a[i], i != SIZE - 1 ? "\n" : "");
	}
	
	getch();
	return 0;
}

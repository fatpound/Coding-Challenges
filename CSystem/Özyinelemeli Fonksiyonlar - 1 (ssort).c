#include <stdio.h>
#include <conio.h>

#define SWAP_P(x, y) (*x == *y ? *x = *y : (*x ^= *y ^= *x ^= *y))

#define SIZE 10

int index = 0;

void ssort(int *pArray, unsigned int size)
{
	if (index < size - 1)
	{
		int min, j;
		
		for (j = index + 1, min = index; j < size; j++)
		{
			if (pArray[min] > pArray[j])
			{
				min = j;
			}
		}
		
		SWAP_P(&pArray[index], &pArray[min]);
		
		index++;
		ssort(pArray, size);
	}
}

int main(void)
{
	int i, a[10] = { 3, 7, 3, 9, 5, 12, 31, 45, 1, 22 };
	
	ssort(a, 10);
	
	for (i = 0; i < SIZE; printf("%d\n", a[i++]));
	
	getch();
	return 0;
}

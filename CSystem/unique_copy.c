#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int repeat = 0;

int *unique_copy(/*const */int *ptr, int size)
{
	int i, j, flag, *d = NULL;
	
	for (i = 0; i < size; i++)
	{
		for (flag = j = 0; j < i; j++)
		{
			if (d[j] == ptr[i])
			{
				flag = 1;
				repeat++;
				break;
			}
		}
		
		if (flag)
		{
			continue;
		}
		
		(d = (int*)(d ? realloc(d, sizeof(int) * (size - repeat)) : malloc(sizeof(int) * size)))[i - repeat] = ptr[i];
	}
	
	return (d);
}

int main()
{
	int a[SIZE];
	int k, *ptr;
	
	srand(time(0));
	
	for (k = 0; k < SIZE; ++k)
	a[k] = rand() % 20;
	
	ptr = unique_copy(a, SIZE);
	printf("dizi yazdiriliyor\n");
	
	for (k = 0; k < SIZE; printf("%3d ", a[k++]));
	
	printf("\n\ndinamik dizi yazdiriliyor\n");
	
	for (k = 0; k < SIZE - repeat; printf("%3d ", ptr[k++]));
	
	free(ptr);
	
	return (!getch());
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#include "person.h"

#define SWAP_P(x, y) (*(x) == *(y) ? 0 : (*(x) ^= *(y) ^= *(x) ^= *(y)))
#define SIZE 5

int strcmp4sort(char *str1, char* str2)
{
	int i;
	
	for (i = 0; str1[i] && str2[i]; i++)
	{
		if (str1[i] < str2[i])
		{
			return -1;
		}
		else if (str1[i] > str2[i])
		{
			return 1;
		}
	}
	
	return 0;
}

void get_info(Person *parray, size_t size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		char fn[MAX_FNAME_LEN], n[MAX_NAME_LEN];
		
		for (j = 0; j < 2; j++)
		{
			printf("enter the person's %sname : ", j ? "" : "first ");
			strcpy(j ? parray[i].name : parray[i].fname, j ? gets(n) : gets(fn));
			fflush(stdin);
		}
		
		printf("enter the person's birthday in the given order seperately -> (d/m/y)\n");
		scanf("%d%d%d", &parray[i].bdate.day, &parray[i].bdate.month, &parray[i].bdate.year);
		fflush(stdin);
		
		printf("\n");
	}
}

void sort_info(Person *ptr, size_t size)
{
	int i, j, k, min;
	
	for (i = 0; i < size - 1; i++)
	{
		for (j = min = i; ++j < size;) // SelectionSort
		{
			if (strcmp4sort(ptr[min].fname, ptr[j].fname) > 0)
			{
				min = j;
			}
		}
		
		if (min != j - 1)
		{
			char temp[MAX_NAME_LEN];
			
			strcpy(temp,             ptr[min].name);
			strcpy(ptr[min].name,    ptr[ i ].name);
			strcpy(ptr[ i ].name,             temp);
			
			strcpy(temp,             ptr[min].fname);
			strcpy(ptr[min].fname,   ptr[ i ].fname);
			strcpy(ptr[ i ].fname,             temp);
			
			SWAP_P(&ptr[min].bdate.day,    &ptr[i].bdate.day);
			SWAP_P(&ptr[min].bdate.month,  &ptr[i].bdate.month);
			SWAP_P(&ptr[min].bdate.year,   &ptr[i].bdate.year);
		}
	}
	
	int count = 1, *indexes = malloc(sizeof(int));
	char c; // bir önceki harf
	
	for (c = ptr[i = 0].fname[0], indexes[0] = 0; i < size; c = ptr[i++].fname[0]) // Farklý harfle baþlayan kelimelerin baþlangýç indisleri
	{
		if (ptr[i].fname[0] != c)
		{
			(indexes = (int*)realloc(indexes, sizeof(int) * ++count))[count - 1] = i;
		}
	}
	
	for (k = 0; k < count - 1; k++)
	{
		for (i = indexes[k]; i < indexes[k + 1] - 1; i++) // Soyadlara göre sýralama
		{
			for (j = min = i; ++j < indexes[k + 1];)
			{
				if (strcmp4sort(ptr[min].name, ptr[j].name) > 0)
				{
					min = j;
				}
			}
			
			if (min != j - 1)
			{
				char temp[MAX_NAME_LEN];
				
				strcpy(temp,             ptr[min].name);
				strcpy(ptr[min].name,    ptr[ i ].name);
				strcpy(ptr[ i ].name,             temp);
				
				strcpy(temp,             ptr[min].fname);
				strcpy(ptr[min].fname,   ptr[ i ].fname);
				strcpy(ptr[ i ].fname,             temp);
				
				SWAP_P(&ptr[min].bdate.day,    &ptr[i].bdate.day);
				SWAP_P(&ptr[min].bdate.month,  &ptr[i].bdate.month);
				SWAP_P(&ptr[min].bdate.year,   &ptr[i].bdate.year);
			}
		}
	}
}

void display_info(/*const */Person *ptr, size_t size)
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		printf("\n%d -> %s\n", i + 1, ptr[i].fname);
		printf(  "%d -> %s\n", i + 1, ptr[i].name);
		printf("%d -> %d/%d/%d\n", i + 1, ptr[i].bdate.day, ptr[i].bdate.month, ptr[i].bdate.year);
	}
}

int main()
{
	Person a[SIZE];
	
	get_info(a, SIZE);
	sort_info(a, SIZE);
	display_info(a, SIZE);
	
	return (!getch());
}

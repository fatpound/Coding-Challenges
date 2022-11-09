#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ARR_LEN 17

int main()
{
	int i, j, k = 0, x, n = 2, count = 1, *d = NULL;
	
	d = (int*) malloc(sizeof(int) * count);
	
	for (d[0] = x = i = 1; k < ARR_LEN; x++)
	{
		for (j = 0; j < (k ? d[x] : n); j++)
		{
			d = (int*)realloc(d, sizeof(int) * ++count);
			d[i + k++] = n;
		}
		
		n = (d[i + k - 1] == 2 ? 1 : 2);
	}
	
	for (i = 0; i < ARR_LEN; printf("%d ", d[i++]));
	
	return (!getch());
}

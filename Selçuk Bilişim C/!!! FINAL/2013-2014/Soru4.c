#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 400

int sum(int *d, int i, int count)
{
	return ((i > 1) ? sum(d, i - 1, count + ((d[i] == d[i - 1] && d[i - 1] == d[i - 2]) ? 1 : 0)) : count);
}

int main()
{
	srand(time(0));
	int i, d[SIZE] = { 0 };
	
	for (i = 0; i < SIZE; i)
	{
		printf("%4d ", d[i++] = rand() % (SIZE + 1));
	}
	
	printf("\n\nard arda 3 kere ayni gelme sayisi > %d", sum(d, SIZE - 1, 0));
	
	getch();
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define LIMIT 2000

int index = 0, d[1147483647] = { 0 };
int urand(void)
{
	if (index == LIMIT) return -1;
	
	int i, r = rand() % LIMIT;
	
	for (i = 0; i < index; i++)
	{
		if (d[i] == r)
		{
			i = -1;
			r = rand() % LIMIT;
		}
	}
	
	d[index++] = r;
	
	return (d[index - 1]);
}

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int k;
	
	for (k = 0; k < LIMIT; ++k)
	{
		printf("%d ", urand());
	}
	
	printf("%d", urand());
	
	getch();
	return 0;
}

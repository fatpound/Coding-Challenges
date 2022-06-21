#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 40

int main()
{
	int k, max = 0, max2 = 0, a[SIZE];
	
	srand(time(0));
	
	for (k = 0; k < SIZE; ++k)
	{
		if (max < (a[k] = rand() % 500))
		{
			max = a[k];
		}
		else if (max2 < a[k])
		{
			max2 = a[k];
		}
		
		printf("%3d%s", a[k], (k != SIZE - 1) && (k != (SIZE / 2) - 1) ? " " : "\n");
	}
	
	printf("\nmax = %d", max);
	printf("\nmac = %d", max2);
	
	getch();
	return 0;
}

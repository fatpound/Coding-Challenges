#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int k, mod = 0, most[50] = { 0 }, random[100] = { 0 };
	
	for (k = 0; k < 100;)
	{
		most[random[k] = rand() % 50]++;
		printf("%d ", random[k++]);
	}
	
	printf("\n\n");
	
	for (k = 0; k < 50; ++k)
	{
		printf("%d ", most[k]);
		
		if (mod < most[k])
		{
			mod = k;
		}
	}
	
	printf("\n\nmod = %d", mod);
	
	getch();
	return 0;
}

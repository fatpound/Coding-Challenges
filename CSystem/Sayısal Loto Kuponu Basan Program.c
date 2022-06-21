#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void LotoBas()
{
	int i, j, r, index, flag, d[6];
	
	for (i = 0; i < 8; i++)
	{
		index = 0;
		
		for (j = 0; j < 6; j++) // Diziyi sýfýrla
		{
			d[j] = 0;
		}
		
		while (1)
		{
			flag = 1;
			r = rand() % 49 + 1;
			d[index++] = r;
			
			for (j = 0; j < index - 1; j++)
			{
				if (d[j] == r)
				{
					flag = 0;
					index--;
					break;
				}
			}
			
			if (flag && index == 6) break;
		}
		
		if (i) printf("\n");
		printf("KOLON %d", i + 1);
		
		for (j = 0; j < 6; j++)
		{
			printf(" %d", d[j]);
		}
	}
}

int main()
{
	srand(time(0));
	
	LotoBas();
	
	getch();
	return 0;
}

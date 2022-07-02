#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	int b, i, j, flag, d[20], temp;
	
	srand(time(NULL));
	
	for (i = 0; i < 20; i++)
	{
		d[i] = rand() % 30 + 1;
	}
	
	for (j = 0; j < 3; j++)
	{
		while(1)
		{
			flag = 0;
			
			for (i = 0; i < 20; i++)
			{
				if (j ? (j == 1 ? (d[i] % 2 && d[i] > d[i + 1]) : (d[i] % 2 == 0 && d[i] < d[i + 1])) : (d[i] % 2 == 0 && d[i + 1] % 2))
				{
					b = d[i];
					d[i] = d[i + 1];
					d[i + 1] = b;
					
					flag = 1;
				}
			}
			
			if (flag == 0) break;
		}
	}
	
	for (i = 0; d[i] % 2 != 0; i++)
	{
		if (d[i + 1] % 2 == 0)
		{
			printf("%d || ", d[i]);
			temp = i + 1;
		}
		else printf("%d < ", d[i]);
	}
	
	for (i = temp; i < 20; i++)
	{
		if (i != 19) printf("%d > ", d[i]);
		else printf("%d", d[i]);
	}
	
	getch();
	return 0;
}

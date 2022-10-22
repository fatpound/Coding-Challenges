#include <stdio.h>
#include <conio.h>

#define SEQ_LEN 100

int main()
{
	int i, j, d[SEQ_LEN] = {0};
	
	for (i = 1; i < SEQ_LEN; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j] == d[i])
			{
				d[i + 1] = i - j;
				break;
			}
			else
			{
				d[i + 1] = 0;
			}
		}
	}
	
	for (i = 0; i < SEQ_LEN; i++)
	{
		printf("%d ", d[i]);
	}
	
	return (!getch());
}

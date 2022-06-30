#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y;
	
	for (x = 0; x < 6; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if ((x < 4 && (y < 7 - x || y > x + 7)) || (x > 3 && (y < 10 - 2 * x || y > x * 3 - 1)))
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		
		if (x != 5) printf("\n");
	}
	
	getch();
	return 0;
}

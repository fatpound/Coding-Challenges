#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y;
	
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 9; y++)
		{
			if (y > x && y < 8 - x)
			{
				printf(" ");
			}
			else
			{
				printf("%d", 2 * (y > 4 ? 8 - y : y) + 1);
			}
		}
		
		if (x != 4) printf("\n");
	}
	
	getch();
	return 0;
}

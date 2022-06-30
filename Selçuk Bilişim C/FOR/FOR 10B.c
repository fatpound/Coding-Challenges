#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y;
	
	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 5; y++)
		{
			if (y < x - 4 || y < 4 - x) printf(" ");
			else printf("%d", 5 - y);
		}
		
		if (x != 8) printf("\n");
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y;
	
	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 10; y++)
		{
			printf(((x < 5 && y < x + 1) || (x > 3 && y > x)) ? "5" : " ");
		}
		
		if (x != 8) printf("\n");
	}
	
	getch();
	return 0;
}
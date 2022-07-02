#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y;
	
	for (x = 1; x < 11; x++)
	{
		for (y = 1; y < 11; y++)
		{
			printf("%d x %2d = %3d%s", x, y, x * y, x == 10 && y == 10 ? "" : "\n");
		}
		
		if (x != 10) printf("------------%s\n", x == 9 ? "-" : "");
	}
	
	getch();
	return 0;
}

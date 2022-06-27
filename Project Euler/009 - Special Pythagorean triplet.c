#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 0, b = 0, c = 0, f = 0;
	
	for (a = 1; a < 1000; a++)
	{
		for (b = 1; b < 1000; b++)
		{
			c = 1000 - a - b;
			
			if ((a * a + b * b) == c * c)
			{
				f = 1;
				break;
			}
		}
		
		if (f == 1) break;
	}
	
	printf("%d %d %d", a, b, c);
	
	getch();
	return 0;
}
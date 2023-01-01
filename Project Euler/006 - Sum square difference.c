#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b = 0, c = 0;
	
	for (a = 1; a < 11; a++)
	{
		b += a * a;
		c += a;
		
		if (a == 10)
		{
			c *= c;
		}
	}
	
	printf("%d", c - b);
	
	getch();
	return 0;
}

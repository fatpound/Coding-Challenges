#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c, t, x;
	
	scanf("%d", &x);
	
	for (a = 2; a < x; a++)
	{
		c = 1;
		
		for (b = 2; b < a; b++)
		{
			if (a % b == 0)
			{
				c = 0;
				break;
			}
		}
		
		if (c == 1 && x % a == 0)
		{
			t += a;
			printf("%d ", a);
		}
	}
	
	printf("\n\n%d", t);
	
	getch();
	return 0;
}

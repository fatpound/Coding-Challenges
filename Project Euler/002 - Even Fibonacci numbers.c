#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b = 1, c = 1, d, x;
	
	printf("fibonacci serisi kac adim devam etsin? : ");
	scanf("%d", &x);
	
	printf("\n%d\n%d", b, c);
	
	for (a = 0; a < x - 2; a++)
	{
		d = b + c;
		b = c;
		c = d;
		
		printf("\n%d", d);
	}

	getch();
	return 0;
}

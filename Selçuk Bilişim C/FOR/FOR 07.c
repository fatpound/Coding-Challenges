#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b = 1, x, y;
	
	scanf("%d%d", &x, &y);
	
	for (a = 1; a <= y; a++)
	{
		b *= x;
	}
	
	printf("%d", b);
	
	getch();
	return 0;
}
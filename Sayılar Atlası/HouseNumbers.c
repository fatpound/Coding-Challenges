#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 0; n < 32; n++)
	{
		printf("%d\n", (8 * n * n * n + 21 * n * n + 19 * n + 6) / 6);
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", n * (2 * n * n + 1) / 3);
	}
	
	getch();
	return 0;
}

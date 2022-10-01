#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", (n * n * n * n - 6 * n * n * n + 23 * n * n - 18 * n + 24) / 24);
	}
	
	getch();
	return 0;
}

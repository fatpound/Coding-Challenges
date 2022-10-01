#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", (5 * n * n - 5 * n + 2) / 2);
	}
	
	getch();
	return 0;
}

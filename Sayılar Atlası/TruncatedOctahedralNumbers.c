#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 10; n++)
	{
		printf("%d\n", 16 * n * n * n - 33 * n * n + 24 * n - 6);
	}
	
	getch();
	return 0;
}

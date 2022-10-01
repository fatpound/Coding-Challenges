#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", 4 * n * n - 3 * n);
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", 3 * n * n - 3 * n + 1);
	}
	
	getch();
	return 0;
}

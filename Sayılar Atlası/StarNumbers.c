#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", 6 * n * (n - 1) + 1);
	}
	
	getch();
	return 0;
}

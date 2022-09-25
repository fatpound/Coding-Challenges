#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", n * (5 * n - 3) / 2);
	}
	
	getch();
	return 0;
}

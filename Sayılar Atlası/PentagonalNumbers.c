#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		printf("%d\n", n * (3 * n - 1) / 2);
	}
	
	getch();
	return 0;
}

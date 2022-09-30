#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 10; n++)
	{
		printf("%d\n", n * (23 * n * n - 27 * n + 10) / 6);
	}
	
	getch();
	return 0;
}

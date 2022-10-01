#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", n * n + (n - 1) * (n - 1));
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 1000; n++)
	{
		printf("%d\n", n * (n + 1));
	}
	
	getch();
	return 0;
}

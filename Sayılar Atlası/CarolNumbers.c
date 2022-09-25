#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 2; n < 9; n++)
	{
		printf("%d\n", ((1 << n) - 1) * ((1 << n) - 1) - 2);
	}
	
	getch();
	return 0;
}

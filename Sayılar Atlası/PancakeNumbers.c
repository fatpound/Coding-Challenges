#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 100; n++)
	{
		printf("%d\n", (n * n + n + 2) / 2); // Lazy Caterer's Sequence
	}
	
	getch();
	return 0;
}

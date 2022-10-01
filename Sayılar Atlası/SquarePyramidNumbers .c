#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 26; n++)
	{
		printf("%d\n", (n * (n + 1) * (2 * n + 1)) / 6);
	}
	
	getch();
	return 0;
}

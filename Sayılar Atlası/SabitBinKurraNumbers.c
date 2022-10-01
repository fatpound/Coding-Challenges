#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 0; n < 26; n++)
	{
		printf("%d\n", 3 * (1 << n) - 1);
	}
	
	getch();
	return 0;
}

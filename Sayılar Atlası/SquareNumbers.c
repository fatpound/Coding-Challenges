#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	
	for (n = 1; n < 26; n++)
	{
		printf("%d\n", n * n);
	}
	
	getch();
	return 0;
}

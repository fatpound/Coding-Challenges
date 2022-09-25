#include <stdio.h>
#include <conio.h>

int Y(int n)
{
	if (!n) return 0;
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n == 3) return 2;
	if (n == 4) return 4;
	if (n == 5) return 8;
	if (n == 6) return 16;
	
	return (Y(n - 1) + Y(n - 2) + Y(n - 3) + Y(n - 4) + Y(n - 5) + Y(n - 6) + Y(n - 7));
}

int main()
{
	int n;
	
	for (n = 6; n < 26; n++)
	{
		printf("%d\n", Y(n));
	}
	
	getch();
	return 0;
}

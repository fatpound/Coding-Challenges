#include <stdio.h>
#include <conio.h>

int D(int n)
{
	if (!n) return 0;
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n == 3) return 2;
	
	return (D(n - 1) + D(n - 2) + D(n - 3) + D(n - 4));
}

int main()
{
	int n;
	
	for (n = 4; n < 26; n++)
	{
		printf("%d\n", D(n));
	}
	
	getch();
	return 0;
}

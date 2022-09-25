#include <stdio.h>
#include <conio.h>

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int main()
{
	int n;
	
	for (n = 0; n < 16; n++)
	{
		printf("%d\n", Power(4, n) + Power(2, n + 1) - 1);
	}
	
	getch();
	return 0;
}

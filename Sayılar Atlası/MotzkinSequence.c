#include <stdio.h>
#include <conio.h>

int M(int n)
{
	if (!n || n == 1) return 1;
	
	return ((3 * (n - 1) * M(n - 2) + (2 * n + 1) * M(n - 1)) / (n + 2));
}

int main()
{
	int n;
	
	for (n = 0; n < 21; n++)
	{
		printf("%d\n", M(n));
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int P(int n)
{
	if (!n) return 3;
	if (n == 1) return 0;
	if (n == 2) return 2;
	
	return (P(n - 2) + P(n - 3));
}

int main()
{
	int n;
	
	for (n = 0; n < 2000; n++)
	{
		printf("%d\n", P(n));
	}
	
	getch();
	return 0;
}

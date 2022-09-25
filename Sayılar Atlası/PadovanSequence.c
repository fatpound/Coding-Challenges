#include <stdio.h>
#include <conio.h>

int P(int n)
{
	if (!n || n == 1 || n == 2) return 1;
	
	return (P(n - 2) + P(n - 3));
}

int main()
{
	int n;
	
	for (n = 1; n < 50; n++)
	{
		printf("%d\n", P(n));
	}
	
	getch();
	return 0;
}

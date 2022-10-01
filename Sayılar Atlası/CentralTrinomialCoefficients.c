#include <stdio.h>
#include <conio.h>

int CTC(int n)
{
	return ((!n || n == 1) ? 1 : (((2 * n - 1) * CTC(n - 1) + 3 * (n - 1) * CTC(n - 2)) / n));
}

int main()
{
	int n;
	
	for (n = 2; n < 19; n++)
	{
		printf("%d\n", CTC(n));
	}
	
	getch();
	return 0;
}

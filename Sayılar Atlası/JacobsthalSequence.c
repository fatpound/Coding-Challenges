#include <stdio.h>
#include <conio.h>

int J(int n)
{
	return ((!n || n == 1) ? n : (J(n - 1) + 2 * J(n - 2)));
}

int main()
{
	int n;
	
	for (n = 2; n < 26; n++)
	{
		printf("%d\n", J(n));
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int A(int n)
{
	if (!n) return 0;
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n == 3) return 2;
	if (n == 4) return 4;
	if (n == 5) return 8;
	
	return (A(n - 1) + A(n - 2) + A(n - 3) + A(n - 4) + A(n - 5) + A(n - 6));
}

int main()
{
	int n;
	
	for (n = 6; n < 26; n++)
	{
		printf("%d\n", A(n));
	}
	
	getch();
	return 0;
}

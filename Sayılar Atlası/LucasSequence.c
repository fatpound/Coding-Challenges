#include <stdio.h>
#include <conio.h>

int L(int n)
{
	if (!n) return 2;
	if (n == 1) return 1;
	
	return (L(n - 1) + L(n - 2));
}

int main()
{
	int n;
	
	for (n = 0; n < 26; n++)
	{
		printf("%d\n", L(n));
	}
	
	getch();
	return 0;
}

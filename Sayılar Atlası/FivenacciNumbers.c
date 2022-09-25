#include <stdio.h>
#include <conio.h>

int B(int n)
{
	if (!n) return 0;
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n == 3) return 2;
	if (n == 4) return 4;
	
	return (B(n - 1) + B(n - 2) + B(n - 3) + B(n - 4) + B(n - 5));
}

int main()
{
	int n;
	
	for (n = 5; n < 26; n++)
	{
		printf("%d\n", B(n));
	}
	
	getch();
	return 0;
}

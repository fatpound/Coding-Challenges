#include <stdio.h>
#include <conio.h>

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int main()
{
	int n;
	
	for (n = 0; n < 26; n++)
	{
		printf("%d\n", 3 * Power(2, n) - 1);
	}
	
	getch();
	return 0;
}

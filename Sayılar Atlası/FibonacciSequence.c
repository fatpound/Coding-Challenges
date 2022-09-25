#include <stdio.h>
#include <conio.h>

int F(int n)
{
	if (n == 1 || n == 2) return 1;
	
	return (F(n - 1) + F(n - 2));
}

int main()
{
	int n;
	
	for (n = 1; n < 2000; n++)
	{
		printf("%d\n", F(n));
	}
	
	getch();
	return 0;
}

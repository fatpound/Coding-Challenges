#include <stdio.h>
#include <conio.h>

int P(int n)
{
	if (!n || n == 1) return (n);
	
	return (2 * P(n - 1) + P(n - 2));
}

int main()
{
	int n;
	
	for (n = 0; n < 26; n++)
	{
		printf("%d\n", P(n));
	}
	
	getch();
	return 0;
}

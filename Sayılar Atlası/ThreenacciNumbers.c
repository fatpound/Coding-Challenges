#include <stdio.h>
#include <conio.h>

int T(int n)
{
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n == 3) return 2;
	
	return (T(n - 1) + T(n - 2) + T(n - 3));
}

int main()
{
	int n;
	
	for (n = 4; n < 26; n++)
	{
		printf("%d\n", T(n));
	}
	
	getch();
	return 0;
}

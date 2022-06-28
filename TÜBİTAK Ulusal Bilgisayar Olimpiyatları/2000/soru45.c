#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, n = 5, sayac = 0;
	
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			sayac++;
		}
	}
	
	printf("%d", sayac); // n(n+1)/2
	
	getch();
	return 0;
}

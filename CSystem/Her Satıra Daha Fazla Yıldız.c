#include <stdio.h>
#include <conio.h>

void put_stars(int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		
		printf(i != n - 1 ? "\n" : "");
	}
}

int main()
{
	put_stars(5);
	
	getch();
	return 0;
}

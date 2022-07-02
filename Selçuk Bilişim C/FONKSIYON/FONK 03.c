#include <stdio.h>
#include <conio.h>

void Dikdortgen(int x, int y)
{
	int i, j;
	
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
		{
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1) printf("*");
			else printf(" ");
		}
		
		if (i != y - 1) printf("\n");
	}
}

int main()
{
	int s, t;
	
	printf("lutfen en ve boy bilgilerini giriniz...\n");
	scanf("%d%d", &s, &t);
	
	printf("\n");
	
	Dikdortgen(s, t);
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int i, x, y, n;

void Cati()
{
	for (x = 0; x < 6; x++)
	{
		for (y = 0; y < 11; y++)
		{
			if (y < 5 - x || y > 5 + x) printf(" ");
			else printf("%c", 219);
		}
		
		printf("\n");
	}
}

void Kat()
{
	for (i = 0; i < n; i++)
	{
		for (x = 0; x < 4; x++)
		{
			for (y = 0; y < 11; y++)
			{
				if (x == 3 || y == 0 || y == 10) printf("%c", 219);
				else if (x == 1 && (y == 3 || y == 7)) printf("%c", 219);
				else printf(" ");
			}
			
			if (i != n - 1 || x != 3) printf("\n");
		}
	}
}

int main()
{
	printf("ev kac katli olsun? : ");
	scanf("%d", &n);
	
	printf("\n");
	
	Cati();
	Kat();
	
	getch();
	return 0;
}

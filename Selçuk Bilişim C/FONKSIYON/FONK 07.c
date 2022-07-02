#include <stdio.h>
#include <conio.h>

int d[9];

// Soru hatali, ama cozumu duzgun :)

void Cizim()
{
	int c, e;
	
	printf("\n");
	
	for (c = 0; c < 9; c++)
	{
		for (e = 0; e < 9; e++)
		{
			if (d[e] != 0)
			{
				printf("*");
				d[e]--;
			}
			else printf(" ");
		}
		
		if (c != 8) printf("\n");
	}
}

int main()
{
	int a, x;
	
	printf("lutfen sirayla 9 sayi giriniz : ");
	
	for(a = 0; a < 9; a++)
	{
		scanf("%d", &x);
		d[a] = x;
	}
	
	Cizim();
	
	getch();
	return 0;
}

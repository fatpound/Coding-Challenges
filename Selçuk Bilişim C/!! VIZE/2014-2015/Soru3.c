#include <stdio.h>
#include <conio.h>

int main()
{
	int a[5][5], i, j, k;
	
	for(k = 0, i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++, k++)
		{
			a[i][j]=k;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if (i == j || 4-i == j) printf("%d", a[i][j]);
			else printf(" ");
		}
		
		if(i != 4) printf("\n");
	}
	
	getch();
	return 0;
}
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c, n;
	
	printf("lutfen uc sayi giriniz...\n");
	scanf("%d%d%d", &n, &b, &c);
	
	for (a = 1; a < n; a++) // a <= n de yazılabilir
	{
		if (a % b == 0 && a % c == 0)
		{
			printf("%d sayisi hem %d sayisina hem de %d sayisina tam bolunur", a, b, c);
			printf("\n\n");
		}
		else
		{
			if (a % b == 0)
			{
				printf("%d sayisi %d sayisina tam bolunur", a, b);
				printf("\n\n");
			}
			
			if (a % c == 0)
			{
				printf("%d sayisi %d sayisina tam bolunur", a, c);
				printf("\n\n");
			}
		}
	}
	
	getch();
	return 0;
}

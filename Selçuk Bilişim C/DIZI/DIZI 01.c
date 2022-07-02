#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int y = 1, sayac = 0, sum = 0, *d = NULL;
	char k;
	
	do
	{
		printf("%sLutfen bir sayi giriniz > ", sayac ? "\n" : "");
		scanf("%d", &y);
		
		sayac++;
		
		d = (int *) ((d == NULL) ? (malloc(sizeof(int))) : (realloc(d, sayac * (sizeof(int)))));
		
		d[sayac - 1] = y;
		
		fflush(stdin);
		
		printf("devam etmek istiyor musunuz? > ");
		
		printf("%c\n", k = getch());
	}
	while (k == 'e' || k == 'E');
	
	for (printf("\n"), y = 0; y < sayac; y++)
	{
		if (d[y] % 7 == 0)
		{
			printf("%d ", d[y]);
			sum += d[y];
		}
	}
	
	printf("\n\ngirdiginiz sayilardan 7'ye bolunenlerin toplami > %d", sum);
	
	free(d);
	
	getch();
	return 0;
}

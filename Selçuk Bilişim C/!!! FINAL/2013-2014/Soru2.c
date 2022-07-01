#include <stdio.h>
#include <conio.h>

int main()
{
	int x, dongu = 0;
	double top, artort;
	char k;
	
	do
	{
		if (dongu) printf("%c\n", k);
		
		scanf("%d", &x);
		
		if (x >= 0)
		{
			if (x % 3 == 0)
			{
				printf("girdiginiz sayi 3'e tam bolunur\n");
				top += x;
			}
			
			if (x % 7 == 0)
			{
				printf("girdiginiz sayi 7'ye tam bolunur\n");
				top += x;
			}
		}
		else
		{
			printf("pozitif bir sayi girmediniz...\n");
		}
		
		printf("devam etmek istiyor musunuz (e/h) > ");
		k = getch();
		dongu++;
	}
	while (k == 'E' || k == 'e');
	
	artort = top / dongu;
	
	printf("\n\ngirdiginiz sayilardan 3 veya 7'ye bolunenlerin aritmetik ortalamasi = %lf", artort);
	
	getch();
	return 0;
}

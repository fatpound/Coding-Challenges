#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, d, t, s, x, z;
	char k;
	
	do
	{
		scanf("%d", &x);
		t = x;
		d = 1;
		z = 0;
		s = 0;

		while (d < x)
		{
			d *= 10;
			a  = t / 10;
			b  = t % 10;
			s += b;
			z += b * b * b;
			t  = a;
		}
		
		if (z == x) printf("girdiginiz sayi, basamaklarinin kuplerinin toplamina esittir\n");
		else printf("girdiginiz sayi, basamaklarinin kuplerinin toplamina esit degildir\n");
				
		printf("devam etmek ister misiniz? (e/h) : ");
		k = getch();
		printf("\n");
	}
	while (k =='E' || k == 'e');
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int sabit = 1111, d[4], say = 0, arti = 0;

void Tuttu(int sorulan)
{
	int i, j, y, bol, sayac, artisay, x = sabit;
	
	printf("\n");
	
	for (i = 0, sayac = 0, artisay = 0, bol = 1000, y = sorulan; i < 4; i++, y %= bol, bol /= 10) // Sayaç tespiti yapmalýyýz önce çünkü tek bir tane + koyarken sýkýntý çýkabiliyor
	{
		for (j = 0; j < 4; j++)
		{
			if (y / bol == d[j])
			{
				sayac++;
				
				if (i == j)
				{
					artisay++;
				}
			}
		}
	}
	
	for (i = 0, bol = 1000, y = sorulan; i < 4; i++, y %= bol, bol /= 10)
	{
		for (j = 0; j < 4; j++)
		{
			if (y / bol == d[j])
			{
				if (i == j)
				{
					if (sayac > 1)
					{
						printf("+%d ", d[i]);
					}
					else printf("+ ");
				}
				else printf("- ");
			}
		}
	}
	
	if (sayac == 4) say = 4;
	if (artisay == 4) arti = 4;
}

int basFarkli(int x)
{
	int i, j, d[4];
	
	for (i = 3; i >= 0; i--, x /= 10)
	{
		d[i] = x % 10;
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (d[i] == d[j])
			{
				return 0;
			}
		}
	}
	
	return 1;
}

int main()
{
	srand(time(NULL));
	int i, x, sorulan, dongu = 0;
	
	while (basFarkli(sabit) == 0)
	{
		sabit = rand() % 9000 + 1000;
	}
	
	x = sabit;
	
	for (i = 3; i >= 0; i--, x /= 10)
	{
		d[i] = x % 10;
	}
	
	do
	{
		printf("%csayi giriniz > ", dongu++ ? 10 : 13);
		scanf("%d", &sorulan);
		
		Tuttu(sorulan);
	}
	while (say != 4 || arti != 4);
	
	printf("\n%d sayisini buldunuz!", sabit);
	
	getch();
	return 0;
}

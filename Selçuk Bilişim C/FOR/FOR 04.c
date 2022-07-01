#include <stdio.h>
#include <conio.h>

int main()
{
	float kare = 1, fkt = 1, toplam = 0;
	int i, n, x;
	
	printf("f(x) = x + x^2/2! + x^3/3! + x^4/4!+ ... + x^n/n!");
	printf("\n\nlutfen x degerini giriniz: ");
	scanf("%d", &x);
	
	printf("lutfen n degerini giriniz: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		kare *= x;
		fkt  *= i;
				
		toplam += kare / fkt;
	}
	
	printf("sonuc = %f", toplam);
	
	getch();
	return 0;
}

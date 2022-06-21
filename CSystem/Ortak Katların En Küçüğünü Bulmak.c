#include <stdio.h>
#include <conio.h>

int obeb(int sayi1, int sayi2)
{
	return (sayi2 ? obeb(sayi2, sayi1 % sayi2) : sayi1);
}

int okek(int sayi1, int sayi2)
{
	return ((sayi1 * sayi2) / obeb(sayi2, sayi1 % sayi2));
}

int main()
{
	int s1, s2;
	
	printf("iki sayi giriniz:\n\n");
	scanf("%d%d", &s1, &s2);
	
	printf("\n%d ve %d sayilarinin o.k.e.k'i = %d", s1, s2, okek(s1, s2));
	
	getch();
	return 0;
}

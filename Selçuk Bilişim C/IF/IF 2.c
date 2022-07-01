#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c, k0, k1, k2, k3, k4, k5, x;
	
	printf("lutfen dort basamakli bir sayi giriniz > ");
	scanf("%d", &x);
	
	k0 = x / 1000; // binler
	k1 = x % 1000;
	
	k2 = k1 / 100; // yuzler
	k3 = k1 % 100;
	
	k4 = k3 / 10; // onlar
	k5 = k3 % 10; // birler
	
	a = k2 * 10;
	b = k4 * 100;
	c = k5 * 1000;
	
	if (4 * (a + b + c + k0) == x) printf("\ngirdiginiz sayi aradiginiz ozelliktedir");
	else printf("\nbu sayi ozel degildir");
	
	getch();
	return 0;
}
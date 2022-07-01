#include <stdio.h>
#include <conio.h>

int main()
{
	int i, x, sum = 0, power = 1;
	
	printf("lutfen 10 basamakli bir binary sayi giriniz > ");
	scanf("%d", &x);
	
	while (power < 513)
	{
		sum += (x % 10) * power;
		x /= 10;
		power *= 2;
	}
	
	printf("girdiginiz sayinin onluk tabandaki degeri = %d", sum);
	
	getch();
	return 0;
}

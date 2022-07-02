#include <stdio.h>
#include <conio.h>

int x, y, a, b = 1;

int EBOB()
{
	int i, kucuksayi;
	
	if (x < y) kucuksayi = x;
	else kucuksayi = y;
	
	for (a = 2; a <= kucuksayi; a++)
	{
		if (x % a == 0 && y % a == 0)
		{
			b = a;
		}
	}
	
	return (b);
}

int EKOK()
{
	return (x * y / b);
}

int main()
{	
	printf("lutfen ebob ve ekokunu bulmak istediginiz sayilari giriniz...\n");
	scanf("%d%d", &x, &y);
	
	printf("\n");
	
	printf("\nEBOB = %d", EBOB());
	printf("\nEKOK = %d", EKOK());
	
    getch();
    return 0;
}

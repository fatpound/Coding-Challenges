#include <stdio.h>
#include <conio.h>

int no_of_digits(int value)
{
	return (value ? (1 + no_of_digits(value / 10)) : 0);
}

int main()
{
	int number, n = 5;
	
	while (n-- > 0)
	{
		printf("bir sayi giriniz : ");
		scanf("%d", &number);
		
		printf("%d sayisi %d basamakli\n", number, no_of_digits(number));
	}
	
	getch();
	return 0;
}

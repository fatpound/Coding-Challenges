#include <stdio.h>
#include <conio.h>

int sum_digits(int value)
{
	return (value ? (value % 10 + sum_digits(value / 10)) : 0);
}

int main()
{
	int val;
	int n = 5;
	
	while (n-- > 0)
	{
		printf("bir sayi giriniz : ");
		scanf("%d", &val);
		
		printf("%d icin basamaklar toplami = %d\n", val, sum_digits(val));
	}
	
	getch();
	return 0;
}

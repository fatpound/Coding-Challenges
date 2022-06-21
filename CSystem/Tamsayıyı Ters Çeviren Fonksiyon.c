#include <stdio.h>
#include <conio.h>

int DigitCount(int x)
{
	return (x ? (1 + DigitCount(x / 10)) : 0);
}

int reverse_val(int value)
{
	int i, result = 0, on = 1, t = value, d[10] = { 0 };
	
	for (i = 0; i < DigitCount(value); d[i++] = t % 10, t /= 10);
	for (--i;i > -1;i--)
	{
		result += (d[i] * on);
		on *= 10;
	}
	
	return (result);
}

int main()
{
	int number;
	
	while (1)
	{
		printf("bir sayi giriniz : programi sonlandirmak icin 0 giriniz :");
		scanf("%d", &number);
		
		if (number == 0)
		{
			break;
		}
	
		printf("%d sayisinin tersi = %d\n", number, reverse_val(number));
	}
	
	printf("test programi sonlandirildi!..");
	
	getch();
	return 0;
}

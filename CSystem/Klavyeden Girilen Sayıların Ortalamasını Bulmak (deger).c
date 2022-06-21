#include <stdio.h>
#include <conio.h>

int main()
{
	int x, min = 0, max = 0, sum = 0, counter = 0;
	float avg = 0;
	char k; // k = 'e'
	
	do
	{
		printf("Bir tamsayi giriniz: ");
		scanf("%d", &x);
		
		if (!counter)
		{
			min = x;
		}
		
		sum += x;
		counter++;
		
		if (max < x)
		{
			max = x;
		}
		
		if (min > x)
		{
			min = x;
		}
		
		avg = (float) sum / counter;
		
		printf("Yeni bir deger girmek istiyor musunuz? [E] / [H] > ");
		
		while (((k = getch()) != 'e') && k != 'E' && k != 'h' && k != 'H');
		
		printf("%c\n\n", k);
	}
	while ((k == 'e') || (k == 'E'));
	
	printf("Max = %d\nMin = %d\nOrtalama = %f\nprogram sonlandi!", max, min, avg);
	
	getch();
	return 0;
}

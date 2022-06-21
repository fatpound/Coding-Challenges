#include <stdio.h>
#include <conio.h>

#define SIZE 100

int main()
{
	char str[100];
	int x, i = 0, uz, on = 1;
	
	printf("bir sayi giriniz : ");
	gets(str);
	
	for (uz = 0; str[uz]; uz++);
	
	while (uz)
	{
		x += (str[--uz] - 48) * on;
		on *= 10;
	}
	
	printf("x = %d", x);
	
	getch();
	return 0;
}

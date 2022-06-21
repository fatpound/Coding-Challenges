#include <stdio.h>
#include <conio.h>

#define SIZE 200
#define HARF (toupper(str[i]))

int rom_to_int(/*const*/char *str)
{
	int i, num = 0;
	
	for (i = 0; str[i]; i++)
	{
		num += (HARF == 'M' ? 1000 : (HARF == 'D' ? 500 : (HARF == 'C' ? 100 : (HARF == 'L' ? 50 : (HARF == 'X' ? 10 : (HARF == 'V' ? 5 : (HARF == 'I' ? 1 : 0)))))));
	}
	
	return (num ? num : -1);
}

int main()
{
	char str[SIZE];
	
	printf("lutfen bir yazi giriniz > ");
	gets(str);
	
	printf("%d", rom_to_int(str));
	
	getch();
	return 0;
}

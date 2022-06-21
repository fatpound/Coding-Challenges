#include <stdio.h>
#include <conio.h>

#define SIZE 200

void display_rom (unsigned int number)
{
	int i, j, t[7] = { 1000, 500, 100, 50, 10, 5, 1 };
	char temp[SIZE] = { 0 }, *harf = { "MDCLXVI\0" };
	char *str = temp;
	
	for (i = 0, j = 0; i < 7; i++)
	{
		if (i < 2 || i == 3)
		{
			while (number >= t[i])
			{
				str[j++] = harf[i];
				number -= t[i];
			}
		}
		else
		{
			if (number == 9 || number == 4)
			{
				str[j++] = 'I';
				str[j++] = (number == 9 ? 'X' : 'V');
				
				// number = 0;
				break;
			}
			else if (number > 399 || (number > 39 && number < 50))
			{
				str[j++] = (number > 399 ? 'C' : 'X');
				str[j++] = (number > 399 ? 'D' : 'L');
				
				number -= (number > 399 ? 400 : 40);
			}
			else if (number < (t[i] * (i == 2 || i == 4 ? 4 : 1)))
			{
				while (number >= t[i])
				{
					str[j++] = harf[i];
					number -= t[i];
				}
			}
			else
			{
				while (number >= t[i])
				{
					str[j++] = harf[i];
					number -= t[i];
				}
			}
		}
	}
	
	printf("%s", str);
}

int main()
{
	unsigned int x;
	
	printf("lutfen bir sayi giriniz > ");
	scanf("%u", &x);
	
	display_rom(x);
	
	getch();
	return 0;
}

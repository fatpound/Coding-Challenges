#include <stdio.h>
#include <conio.h>

#define SIZE 200

char *int_to_rom(int x, char *str)
{
	int i, j, t[7] = { 1000, 500, 100, 50, 10, 5, 1 };
	char *harf = { "MDCLXVI\0" };
	
	for (i = 0, j = 0; i < 7; i++)
	{
		if (i < 2 || i == 3)
		{
			while (x >= t[i])
			{
				str[j++] = harf[i];
				x -= t[i];
			}
		}
		else
		{
			if (x == 9 || x == 4)
			{
				str[j++] = 'I';
				str[j++] = (x == 9 ? 'X' : 'V');
				
				// x = 0;
				break;
			}
			else if (x > 399 || (x > 39 && x < 50))
			{
				str[j++] = (x > 399 ? 'C' : 'X');
				str[j++] = (x > 399 ? 'D' : 'L');
				
				x -= (x > 399 ? 400 : 40);
			}
			else if (x < (t[i] * (i == 2 || i == 4 ? 4 : 1)))
			{
				while (x >= t[i])
				{
					str[j++] = harf[i];
					x -= t[i];
				}
			}
			else
			{
				while (x >= t[i])
				{
					str[j++] = harf[i];
					x -= t[i];
				}
			}
		}
	}
	
	return (str);
}

int main()
{
	int x;
	char temp[SIZE] = { 0 };
	char *w = temp;
	
	printf("lutfen bir sayi giriniz > ");
	scanf("%d", &x);
	
	printf("%s", int_to_rom(x, w));
	
	getch();
	return 0;
}

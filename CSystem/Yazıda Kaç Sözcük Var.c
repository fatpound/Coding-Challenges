#include <stdio.h>
#include <conio.h>

#define SIZE 200

int main()
{
	char str[SIZE];
	int i, word_counter = 0, sayac = 0;
	
	printf("bir yazi giriniz : ");
	gets(str);
	
	for (i = 0; str[i + 2]; i++)
	{
		if ((!i && str[i] != 32 && str[i + 1] != 32) || (str[i] == 32 && str[i + 1] != 32 && str[i + 2] != 32 && str[i + 1] && str[i + 2]))
		{
			word_counter++;
		}
	}
	
	printf("%s yazisi %d kelime\n", str, word_counter);
	
	getch();
	return 0;
}

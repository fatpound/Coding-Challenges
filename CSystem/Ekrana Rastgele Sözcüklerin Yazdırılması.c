#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define NO_OF_WORDS 20
#define MIN_WORD_LEN 9
#define MAX_WORD_LEN 15
#define NO_SUC_VOWELS 2
#define NO_SUC_CONS 3

int vowCheck(char harf)
{
	int i;
	char vowel[5] = { 'A', 'E', 'I', 'O', 'U' };
	
	for (i = 0; i < 5; i++)
	{
		if (harf == vowel[i])
		{
			return 1;
		}
	}
	
	return 0;
}

void randWord(void)
{
	int i, flag, r = rand() % (MAX_WORD_LEN - MIN_WORD_LEN + 1) + MIN_WORD_LEN;
	char c[r + 1];
	
	for (i = 0, c[r] = 0; i < r; i++) // Diziyi sýfýrlama
	{
		c[i] = 0;
	}
	
	for (i = 0; i < r; i++) // Diziyi rastgele harflerle doldurma
	{
		c[i] = rand() % 26 + 65;
	}
	
	while (1)
	{
		flag = 1;
		
		for (i = 0; i + 2 < r; i++) // i < r + 1 - NO_SUC_CONS
		{
			if (vowCheck(c[i]) == 0 && vowCheck(c[i + 1]) == 0 && vowCheck(c[i + 2]) == 0)
			{
				flag = 0;
				c[i + rand() % 3] = rand() % 26 + 65;
				i--;
			}
		}
	
		for (i = 0; i + 1 < r; i++) // i < r + 1 - NO_SUC_VOWELS
		{
			if (vowCheck(c[i]) && vowCheck(c[i + 1]))
			{
				flag = 0;
				c[i + rand() % 2] = rand() % 26 + 65;
				i--;
			}
		}
		
		if (flag) break;
	}
	
	printf("%s", c);
}

int main()
{
	srand(time(NULL));
	int i;
	
	for (i = 0; i < NO_OF_WORDS; i++)
	{
		if (i) printf("\n");
		randWord();
	}
	
	getch();
	return 0;
}

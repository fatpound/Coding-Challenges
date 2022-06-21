#include <stdio.h>
#include <conio.h>

char *mystrchr(/*const*/char *str, int c)
{
	int i;
	
	for (i = 0; str[i]; i++)
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
	}
	
	return 0;
}

int main()
{
	char string[] = "The quick brown dog jumps over the lazy fox";
	int ch;
	
	for (ch = 'a'; ch < 'i' + 1; ++ch)
	{
		printf("%s%s", mystrchr(string, ch), (ch != 'i') ? "\n" : "");
	}
	
	getch();
	return 0;
}

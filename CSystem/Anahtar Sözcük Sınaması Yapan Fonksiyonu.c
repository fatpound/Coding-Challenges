#include <stdio.h>
#include <conio.h>

int is_keyword(const char *str)
{
	int i, j, flag, uz;
	
	char *text[] = { "", "do", "if", "for", "int", "auto", "case", "char", "else", "enum", "goto", "long", "void", "break", "const", "float", "short", "union", "while", "double", "extern", "return", "signed", "sizeof", "static", "struct", "switch", "default", "typedef", "continue", "register", "unsigned", "volatile" };
	int d[] = { 0, 0, 1, 3, 5, 13, 19, 27, 29 };
	
	for (uz = 0; str[uz]; uz++);
	
	if (uz < 2) return 0;
	
	for (i = 0; i < (d[uz + 1] - d[uz]); i++)
	{
		for (j = 0, flag = 0; j < uz; j++)
		{
			if (str[j] != text[d[uz] + i][j])
			{
				flag = 1;
				break;
			}
		}
		
		if (!flag) return 1;
	}
	
	return 0;
}

int main()
{
	char c[8 + 1];
	
	gets(c);	
	printf("%d", is_keyword(c));
	
	getch();
	return 0;
}

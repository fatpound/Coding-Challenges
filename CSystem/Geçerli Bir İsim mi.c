#include <stdio.h>
#include <conio.h>

int is_legal(const char *str)
{
	int i, j, flag, uz;
	
	char *text[] = { "", "int", "bool", "char", "void", "float", "double" };
	int d[] = { 0, 0, 0, 1, 2, 5, 6 };
	
	for (uz = 0; str[uz]; uz++);
	
	if (uz < 3) return 0;
	
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
	char c[6 + 1];
	
	gets(c);	
	printf("%d", is_legal(c));
	
	getch();
	return 0;
}

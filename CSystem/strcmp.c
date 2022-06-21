#include <stdio.h>
#include <conio.h>

#define SIZE 200

int mystrcmp(/*const*/char *s1, /*const*/char *s2)
{
	int i, j, k;
	
	for (i = 0; s1[i]; i++);
	for (j = 0; s2[j]; j++);
	
	if (i != j)
	{
		return (i > j ? 1 : -1);
	}
	
	for (k = 0; k < i; k++)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] > s2[k] ? -2 : -3);
		}
	}
	
	return 0;
}

int main()
{
	char name1[SIZE], name2[SIZE];
	int comp_result;
	
	printf("birinci ismi giriniz : ");
	gets(name1);
	printf("ikinci ismi giriniz : ");
	gets(name2);
	
	comp_result = mystrcmp(name1, name2);
	
	printf("(%s) %s (%s)", name1, comp_result ? ((comp_result > 0 || comp_result == -2) ? ">" : "<") : "==", name2);
	
	getch();
	return 0;
}

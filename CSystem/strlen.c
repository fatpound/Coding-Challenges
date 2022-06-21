#include <stdio.h>
#include <conio.h>

#define SIZE 200

int mystrlen(/*const */char *s)
{
	char *t = s;
	
	while (*t++);
	
	return (t - 1 - s);
}

int main()
{
	char str[SIZE];
	
	printf("bir yazi girniz : ");
	gets(str);
	
	printf("yazinin uzunlugu = %d", mystrlen(str));
	
	getch();
	return 0;
}

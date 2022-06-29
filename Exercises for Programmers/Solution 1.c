#include <stdio.h>
#include <conio.h>

#define MAX_LEN 255

int main()
{
	char name[MAX_LEN];
	
	printf("What is your name? ");
	gets(name);
	printf("Hello, %s, nice to meet you!", name);
	
	getch();
	return 0;
}

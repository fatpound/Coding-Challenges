#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char w[256];
	
	printf("What is the input string? ");
	gets(w);
	printf("%s has %d characters.", w, strlen(w));
	
	return !_getch();
}

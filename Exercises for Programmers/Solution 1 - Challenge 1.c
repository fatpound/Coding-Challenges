#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define STDSIZE (sizeof((void*)stdin))

int main() // Not finished yet...
{
	int x;
	void *s[] = {stdin , stdout , stderr };
	char *w[] = {  "in",   "out",   "err"};
	
	// Adreslerin ekrana yazdýrýlmasý
	for (x = 0; x < 3; x++)
	{
		printf("%cstd%s %s= %p\n", '&', w[x], x ? "" : " ", s[x]);
	}
	
	printf("\nWhat is your name? ");
	
	for (x = 0; x < STDSIZE; x++)
	{
		scanf("%c", s[0] + x);
	}
	
	printf("Hello, %s", s[0]);
	
	getch();
	return 0;
}

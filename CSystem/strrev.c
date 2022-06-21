#include <stdio.h>
#include <conio.h>

#define SWAP(x, y) (*x == *y ? 0 : (*x ^= *y ^= *x ^= *y))
#define SIZE 100

char *mystrrev(char *str)
{
	int i, j, t;
	
	for (i = 0; str[i]; i++);
	for (t = i--, j = 0; j < (t / 2); j++, i--)
	{
		SWAP(&str[j], &str[i]);
	}
	
	return (str);
}

int main()
{
	char s[SIZE] = "Life is very short and there's no time for fighting";
	
	printf("%s!", mystrrev(s));
	
	getch();
	return 0;
}

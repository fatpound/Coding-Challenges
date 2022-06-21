#include <stdio.h>
#include <conio.h>

#define SWAP(x, y) (x == y ? 0 : (x ^= y ^= x ^= y))

int main()
{
	int i, j;
	char yazi[101];
	
	printf("lutfen bir yazi giriniz > ");
	gets(yazi);
	
	for (i = 0; yazi[i]; i++);
	
	yazi[i + 1] = ')';
	yazi[i + 2] = 0;
	
	for (j = i; j; j--) SWAP(yazi[j], yazi[j - 1]);
	
	yazi[0] = '(';
	
	printf("\nyazinizin yeni hali > %s", yazi);
	
	getch();
	return 0;
}

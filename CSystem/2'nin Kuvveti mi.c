#include <stdio.h>
#include <conio.h>

#define ISPOWOF2(x) (!(x & (x - 1)))

int main()
{
	int x;
	
	scanf("%d", &x);
	
	printf("%d", ISPOWOF2(x));
	
	getch();
	return 0;
}

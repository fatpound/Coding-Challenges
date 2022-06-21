#include <stdio.h>
#include <conio.h>

#define ABS(x, y) (x >= y ? (x - y) : (y - x))

int main()
{
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	printf(((a < (b + c)) && (b < (a + c)) && (c < (a + b)) && (a > ABS(b, c)) && (b > ABS(a, c)) && (c > ABS(a, b))) ? "ewt" : "hyr");
	
	getch();
	return 0;
}
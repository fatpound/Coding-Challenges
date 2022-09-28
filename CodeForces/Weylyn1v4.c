#include <stdio.h>
#include <conio.h>

int main()
{
	int i, n, h, sum = 0, x;
	
	for (scanf("%d%d", &n, &h), i = 0; i++ < n; scanf("%d", &x), sum += x > h ? 2 : 1);
    
	return (printf("\n%d", sum), !getch());
}

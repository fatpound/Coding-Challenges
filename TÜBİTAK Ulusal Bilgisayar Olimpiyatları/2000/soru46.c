#include <stdio.h>
#include <conio.h>

int main()
{
	int k, n, m;
	
	k = 999;
	
	n = 2 * k;
	k = n;
	m = 1 + k / n;
	n %= m;
	
	printf("%d", (k / m) + n - k / 2); // 0
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i, n, h, sum = 0, *d;
	
	scanf("%d%d", &n, &h);
	
	d = (int*) malloc(sizeof(int) * n);
	
	for (i = 0; i < n; scanf("%d", &d[i++]), sum += d[i++] > h ? 2 : 1);
	
	printf("\n%d", (free(d), sum));
	
	return 0;
}

#include <stdio.h>
#include <conio.h>

#define ABS(x) (x > 0 ? x : -x)
#define aci (ABS((11 * (m %= 60) - 60 * (h %= 12) / 2)))

int main()
{
	int h, m;
	
	scanf("%d%d", &h, &m);
	
	printf("%lf", aci > 180 ? (float) 360 - aci : (float) aci);
	
	getch();
	return 0;
}

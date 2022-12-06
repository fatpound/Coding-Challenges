#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

U64 int CollatzConjecture(U64 int n, U64 int r)
{
	U64 int i, t, cycle, greatest;
	
	for (i = n, greatest = 0; i <= r; i++)
	{
		cycle = 1;
		t = i;
		
		while (t != 1)
		{
			if (t & 1) t = t * 3 + 1;
			else t >>= 1;
	
			cycle++;
		}
		
		if (greatest < cycle) greatest = cycle;
	}
	
	return (greatest);
}

int main()
{
	U64 int x, y;
	
	scanf("%llu%llu", &x, &y);
	
	printf("%llu %llu %llu", x, y, CollatzConjecture(x, y));
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

U64 int CollatzCycle()
{
	U64 int i, t, cycle, greatest;
	
	for (i = 1, greatest = 0; i <= 1000000; i++)
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

U64 int CollatzNumber()
{
	U64 int i, t, big, cycle, greatest;
	
	for (i = 1, greatest = 0, big = 0; i <= 1000000; i++)
	{
		cycle = 1;
		t = i;
		
		while (t != 1)
		{
			if (t & 1) t = t * 3 + 1;
			else t >>= 1;
	
			cycle++;
		}
		
		if (greatest < cycle)
		{
			greatest = cycle;
			big = i;
		}
	}
	
	return (big);
}

int main()
{
	printf("aranan sayi : %llu\nadim sayisi : %llu", CollatzNumber(1, 1000000), CollatzCycle(1, 1000000));
	
	getch();
	return 0;
}

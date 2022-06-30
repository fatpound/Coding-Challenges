#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

U64 int Collatz(int N, int mode)
{
	U64 int i, t, big = 0, cycle, greatest = 0;
	
	for (i = 1; i <= N; i++)
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
	
	return (mode ? big : greatest);
}

int main()
{
	printf("Number = %llu\nSteps  = %llu", Collatz(1000000, 1), Collatz(1000000, 0));
	
	getch();
	return 0;
}

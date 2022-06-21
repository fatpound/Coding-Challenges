#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define MIN(x, y, z) (x > y ? (y > z ? z : y) : (y > z ? (x > z ? z : x) : x))
#define MID(x, y, z) (x > y ? (y > z ? y : (x > z ? z : x)) : (y > z ? (x > z ? x : z) : y))
#define MAX(x, y, z) (x > y ? (y > z ? x : (x > z ? x : z)) : (y > z ? y : z))

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (!(n & 1) || n % 3 == 0) return 0;
	
	int i, j = n + 1;
	
	for (i = 5; i * i < j; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int Game(int n)
{
	int i, j, t, pul[3] = { 0 }, d[99] = { 0 };
	
	for (i = 0; i < 99; i++)
	{
		t = d[i] = rand() % 99 + 1;
		
		for (j = 0; j < i; j++)
		{
			if (d[j] == t)
			{
				i--;
				break;
			}
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		if (!d[t = rand() % 99])
		{
			i--;
		}
		else
		{
			pul[i] = d[t];
			d[t] = 0;
		}
	}
	
	return ((n ? ((n == 1) ? (IsPrime(pul[0] + pul[1] + pul[2])) : ((n == 2) ? ((MAX(pul[0], pul[1], pul[2]) - MIN(pul[0], pul[1], pul[2])) > MID(pul[0], pul[1], pul[2])) : 0)) : ((pul[0] + pul[1] + pul[2]) < 150)) ? 1 : 0);
}

int main()
{
	srand(time(0));
	int i, sum = 0;
	
	for (i = 0; i < 30000; i++)
	{
		sum += (Game(0) ? 1 : 0);
	}
	
	printf("%g%%\n", (float) sum / 300);
	
	for (i = 0, sum = 0; i < 30000; i++)
	{
		sum += (Game(1) ? 1 : 0);
	}
	
	printf("%g%%\n", (float) sum / 300);
	
	for (i = 0, sum = 0; i < 30000; i++)
	{
		sum += (Game(2) ? 1 : 0);
	}
	
	printf("%g%%", (float) sum / 300);
	
	getch();
	return 0;
}

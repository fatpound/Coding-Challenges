#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define SWAP(x, y) (x == y ? x = y : (x ^= y ^= x ^= y))

#define YAZI 0
#define TURA 1

int main()
{
	srand(time(0));
	int i, t, X, fatpound, d[3] = { -1, -1, -1 }, count = 0, win = 0;
	
	for (i = 0; i < 1000000; i++)
	{
		X = fatpound = 100000;
		
		do
		{
			fatpound += 10000;
			X        -= 10000;
			
			t = rand() & 1;
			
			if (count < 3)
			{
				d[count] = t;
			}
			else
			{
				SWAP(d[0], d[1]);
				SWAP(d[1], d[2]);
				
				d[2] = t;
			}
			
			count++;
			
			if ((d[1] == YAZI && d[2] == YAZI) || (d[0] == YAZI && d[1] == YAZI && count < 3))
			{
				X        += 35000;
				fatpound -= 35000;
			}
			else if (d[0] == TURA && d[1] == TURA && d[2] == TURA)
			{
				X        += 60000;
				fatpound -= 60000;
			}
			
			// printf("%d %d\n", X, fatpound);
		}
		while (X > 0 && fatpound > 0);
		
		if (!X) win++;
	}
	
	printf("%g %c", (float) win / 10000, '%');
	
	getch();
	return 0;
}

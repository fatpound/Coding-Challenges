#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define SWAP(x, y) (x == y ? x = y : (x ^= y ^= x ^= y))
#define MIN(x, y) (x > y ? y : x)
#define MAX(x, y) (x > y ? x : y)

int main(int argc, char *argv[])
{
	if (argc > 4)
	{
		printf("cok fazla parametre!");
		
		getch();
		exit(1);
	}
	
	if (argc < 4)
	{
		printf("eksik parametre!");
		
		getch();
		exit(1);
	}
	
	srand(time(NULL));
	int i, j, count, x = atoi(argv[1]), y = atoi(argv[2]), m = atoi(argv[3]);
	int r[2] = { rand() % MIN(x, y), rand() % MAX(x, y) }, d[x][y];
	
	for (i = 0; i < m; i++)
	{
		if (d[r[x > y ? 1 : 0]][r[x > y ? 0 : 1]] == '*')
		{
			i--;
			r[0] = rand() % MIN(x, y);
			r[1] = rand() % MAX(x, y);
			continue;
		}
		
		d[r[x > y ? 1 : 0]][r[x > y ? 0 : 1]] = '*';
	}
	
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			count = 0;
			
			if (d[i][j] != '*')
			{
				if (i && j && d[i - 1][j - 1] == '*') count++;
				if (j && d[i][j - 1] == '*') count++;
				if (i != x - 1 && j && d[i + 1][j - 1] == '*') count++;
				if (i != x && d[i + 1][j] == '*') count++;
				if (i && d[i - 1][j] == '*') count++;
				if (i != x - 1 && j != y - 1 && d[i + 1][j + 1] == '*') count++;
				if (j != y - 1 && d[i][j + 1] == '*') count++;
				if (i && j != y - 1 && d[i - 1][j + 1] == '*') count++;
				
				d[i][j] = count;
			}
		}
	}
	
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%c", d[i][j] != '*' ? d[i][j] + 48 : d[i][j]);
		}
		
		if (i != x - 1) printf("\n");
	}
	
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define R (rand() % 6 + 1)

int sayac, temp[6] = { 0 };

int SameNumber(int x)
{
	int i;
	
	for (i = 0; i < sayac; i++)
	{
		if (temp[i] == x)
		{
			return 1;
		}
	}
	
	return 0;
}

int CrapsGame()
{
	int zar1, zar2, sayac = 0, sum = 0, gameover = 0, win = 0;
	
	while (!gameover && !win)
	{
		sum = (zar1 = R) + (zar2 = R);
		
		if (sum == 7 || sum == 11)
		{
			win = 1;
		}
		else if (sum == 2 || sum == 3 || sum == 12)
		{
			gameover = 1;
		}
		else
		{
			temp[sayac] = sum;
			
			while (!SameNumber(sum = (zar1 = R) + (zar2 = R)))
			{
				if (sum == 7)
				{
					gameover = 1;
					break;
				}
			}
			
			if (!gameover)
			{
				sayac++;
			}
		}
	}
	
	return (win ? 1 : 0);
}

int main()
{
	srand(time(0));
	
	int k, count = 0;
	
	for (k = 0; k < 100000; k++)
	{
		count += CrapsGame();
	}
	
	printf("%g%%", (float) count / 1000);
	
	getch();
	return 0;
}

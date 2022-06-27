#include <stdio.h>
#include <conio.h>

#define U64 unsigned long long

int main()
{
	U64 int i, j, kenar, d[100][100] = { 0 };
	
	printf("lutfen kenar sayisini giriniz > ");
	
	scanf("%llu", &kenar);
	kenar++;
	
	for (printf("\n"), i = 0; i < kenar; i++)
	{
		for (j = 0; j < kenar; j++)
		{
			if ((i == 0 && j == 0) || (i == 0 && j) || (i && j == 0))
			{
				d[i][j] = 1;
			}
			else if (i == 1 || j == 1)
			{
				d[i][j] = i + j;
			}
			else
			{
				d[i][j] = d[i - 1][j] + d[i][j - 1];
			}
		}
	}
	
	/*
			0	1	2	3	4
		
		0	1	1	1	1	1
		1	1	2	3	4	5
		2	1	3	6	10	15
		3	1	4	10	20	35
		4	1	5	15	35	70
	*/
	
	for (i = 0; i < kenar; i++)
	{
		for (j = 0; j < kenar; j++)
		{
			printf("%llu%s%s", d[i][j], i == kenar - 1 && j == kenar - 1 ? "" : (d[i][j] < 10 ? "  " : " "), i != kenar - 1 && j == kenar - 1 ? "\n" : "");
		}
	}
	
	getch();
	return 0;
}

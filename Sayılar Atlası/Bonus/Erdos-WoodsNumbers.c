#include <stdio.h>
#include <conio.h>

int GCD(int x, int y)
{
	return (y ? GCD(y, x % y) : x);
}

/*

 k                       a

16                    2184
22                 3521210
34             47563752566
36             12913165320
46        3180417880379694
56     2212091405535117414
64  3843095117044776029646
66  3615758618744894508744
70 13151117479433859435440

*/

int IsErdosWoods(int k)
{
	int a, i, flag;
	
	for (a = 1; a < 4000000; a++)
	{
		for (flag = 0, i = 1; i < k; i++)
		{
			if (GCD(a, a + i) > 1 || GCD(a + k, a + i) > 1)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		
		if (flag)
		{
			return 1;
		}
	}
	
	return 0;
}

int main()
{
	int n;
	
	for (n = 16; n < 23; n++)
	{
		if (IsErdosWoods(n))
		{
			printf("%d\n", n);
		}
	}
	
	return (!getch());
}

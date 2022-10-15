#include <stdio.h>
#include <conio.h>

int GCD(int x, int y)
{
	return (y ? GCD(y, x % y) : x);
}

/*

 k                       a

16                   2184
22                3521210
34            47563752566
36            12913165320
46         21653939146794
56     172481165966593120
64  808852298577787631376
66   91307018384081053554
70 1172783000213391981960

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

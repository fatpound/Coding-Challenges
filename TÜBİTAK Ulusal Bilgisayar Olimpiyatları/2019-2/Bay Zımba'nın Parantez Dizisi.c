#include <stdio.h>
#include <conio.h>
#include <string.h>

int usage = 0, K;
char* str = "))(((";

int Sor(int i)
{
	int N = strlen(str);
	
	if (usage > 200000 || i < 1 || i > N)
	{
		return -1;
	}
	
	usage++;
	
	int j, count = 0;
	
	for (j = 0; j <= i; j++)
	{
		if (str[j] == '(')
		{
			count++;
		}
	}
	
	return (2 * count >= N ? 1 : 0);
}

int Bul(int N)
{
	int i, right = N, left = 0;
	int value = (right + left) / 2;
	
	for (i = 0; i < K; i++)
	{
		int result = Sor(value);
		
		if (result == 0 || result == 1)
		{
			result ? (left = value) : (right = value);
		}
		else break;
		
		if (right < left)
		{
			if ((left - right < 3) && (value % 2 == 0))
			{
				return value;
			}
			
			value = (left + right) / 2;
		}
		else value += value / 2 * (result == 1 ? -1 : 1);
	}
	
	return -1;
}

// Special thanks to Weylyn...
int main()
{
	printf("%d", Bul(K = strlen(str)));
	
	char cop = getch();
	return 0;
}

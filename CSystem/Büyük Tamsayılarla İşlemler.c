#include <stdio.h>
#include <conio.h>

#define SIZE (200 + 1)

int mystrlen(/*const */char *s)
{
	char *t = s;
	
	while (*t++);
	
	return (t - 1 - s);
}

void addlong(/*const*/ char *num1, /*const*/ char *num2, char *num3)
{
	int i, j, end1 = 0, end2 = 0, end = 199, eldevar = 0, flag = 1;
	
	for (i = 0, j = 0; num1[i] && num2[j]; i++, j++)
	{
		if (num1[i] == 32 || num2[j] == 32 || ((i && (num1[i] == '+' || num1[i] == '-' || num1[i] < 48 || num1[i] > 57))) || ((j && (num2[j] == '+' || num2[j] == '-' || num2[j] < 48 || num2[j] > 57))))
		{
			*num3 = 0;
			return;
		}
		
		if (!num1[i + 1] || !num2[j + 1])
		{
			if (num1[i + 1])
			{
				if (flag)
				{
					end2 = j;
					flag = 0;
				}
				
				j--;
			}
			else
			{
				if (flag)
				{
					end1 = i;
					flag = 0;
				}
				
				i--;
			}
		}
	}
	
	if (mystrlen(num1) > mystrlen(num2))
	{
		end1 = i;
	}
	else
	{
		end2 = j - 1;
	}
	
	for (i = 0; i < 200; num3[i++] = 48);
	
	for (flag = 1, num3[200] = 0; end1 > -1 && end2 > -1; end--, end1--, end2--)
	{
		eldevar += (num1[end1] + num2[end2] - 96 - (!flag ? ((!end1 ? num1[end1] : num2[end2]) - 48) : 0));
		
		num3[end] = (eldevar % 10) + 48;
		eldevar /= 10;
		
		if (!end1 || !end2)
		{
			if (flag)
			{
				flag = 0;
			}
			
			if (end1)
			{
				end2++;
			}
			else end1++;
		}
	}
	
	num3[end] = (eldevar % 10) + 48;
}

int main()
{
	char n1[SIZE] = "9999999999999999999999999";
	char n2[SIZE] = "9999999999999999998888888888888888";
	char n3[SIZE];
	
	addlong(n1, n2, n3);
	
	int i;
	
	for (i = 0; n3[i] == 48; i++);
	
	printf("%s", n3 + i);
	
	getch();
	return 0;
}

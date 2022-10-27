#include <stdio.h>
#include <conio.h>

int IsPrime(int n)
{
	if (n < 4) return (n > 1);
	if (!(n & 1) || n % 3 == 0) return 0;
	
	int i;
	
	for (i = 5; i * i < n + 1; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int i = 1, j, ekle = 0, add = 0, flag = 1, num = 1, p = 0;
	
	do
	{
		for (i += 2, j = num + 1; j != i * i; j++)
		{
			if (!add--)
			{
				if (IsPrime(j == 2 ? 0 : j))
				{
					p++;
				}
				
				add = (ekle += (flag = !flag));
			}
		}
		
		num = j;
		add--;
	}
	while (((double)p * 100) / ((double)i * 2 - 1) >= 10);
	
	printf("%d", i);
	
	return (!getch());
}

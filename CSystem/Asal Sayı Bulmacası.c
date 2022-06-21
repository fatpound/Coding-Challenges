#include <stdio.h>
#include <conio.h>

int IsPrime(int x)
{
	int i;

	if (x < 2) return 0;

	for (i = 2; i * i < (x + 1); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int x, y, z, t, min = 297, minyeni = 2997, max = 0, flag = 0;
	
	for (x = 10; 1; x++)
	{
		flag = 0;
		
		for (y = 10; y < x; y++)
		{
			for (z = 10; z < y; z++)
			{
				t = x + y + z;
				
				if (t > 297)
				{
					flag = 1;
					break;
				}
				
				if (IsPrime(x) && IsPrime(y) && IsPrime(z) && IsPrime(t))
				{
					if (max < t) max = t;
					if (min > t) min = t;
				}
			}
			
			if (flag == 1) break;
		}
		
		if (flag == 1) break;
	}
	
	printf("%d\n%d", max, min);
	
	for (x = 100; 1; x++)
	{
		flag = 0;
		
		for (y = 100; y < x; y++)
		{
			for (z = 100; z < y; z++)
			{
				t = x + y + z;
				
				if (t > 2997)
				{
					flag = 1;
					break;
				}
				
				if (IsPrime(x) && IsPrime(y) && IsPrime(z) && IsPrime(t))
				{
					if (max < t) max = t;
					if (minyeni > t) minyeni = t;
				}
			}
			
			if (flag == 1) break;
		}
		
		if (flag == 1) break;
	}
	
	printf("\n\n%d\n%d", max, minyeni);
	
	/*
	
	281
	41
	
	2971
	311
	
	*/
	
	getch();
	return 0;
}


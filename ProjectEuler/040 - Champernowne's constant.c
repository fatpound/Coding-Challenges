#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Power(int x, int n)
{
	return (n > 0 ? (Power(x, n - 1) * x) : 1);
}

int DigitCount(int n)
{
	int on = 1000000, count = 7;
	
	while (n < on)
	{
		on /= 10;
		count--;
	}
	
	return (count);
}

int main()
{
	int i = 0, num = 0, x, dc, pow, *d = (int*) malloc(sizeof(int) * 1000000), prod = 1;
	
	while (++num)
	{
		for (x = num, dc = DigitCount(x), pow = Power(10, dc - 1); pow; x++, i++, pow /= 10)
		{
			d[i] = x / pow;
			x %= pow;
		}
		
		if (i >= 1000000)
		{
			break;
		}
	}
	
	for (i = 1; i <= 1000000; i *= 10)
	{
		prod *= d[i - 1];
	}
	
	printf("%d", prod);
	
	return (!getch());
}

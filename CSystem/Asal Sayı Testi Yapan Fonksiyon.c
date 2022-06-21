#include <stdio.h>
#include <conio.h>

int isprime(int number)
{
	if (number < 4) return (number > 1);
	if (!(number & 1) || number % 3 == 0) return 0;
	
	int i;
	
	for (i = 5; i * i < (number + 1); i += 6)
	{
		if (number % i == 0 || number % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int k;
	
	for (k = 0; k < 1000; k++)
	{
		if (isprime(k))
		{
			printf("%d ", k);
		}
	}
	
	getch();
	return 0;
}

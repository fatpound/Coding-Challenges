#include <stdio.h>
#include <conio.h>

double squareRoot(double x)
{
	double y;
	
	for (y = 0; y * y <= x; y += 0.000001);
	
	return (y);
}

double standartDeviation(int d[], int size)
{
	int i;
	double ort = 0, pay = 0;
	
	for (i = 0; i < size; i++)
	{
		ort += d[i];
	}
	
	ort /= size;
	
	for (i = 0; i < size; i++)
	{
		pay += ((d[i] - ort) * (d[i] - ort));
	}
	
	return (squareRoot(pay / (size - 1)));
}

int main()
{
	int d[3] = { 1, 6, 4 };
	
	printf("%g", standartDeviation(d, sizeof d / sizeof (int)));
	
	getch();
	return 0;
}

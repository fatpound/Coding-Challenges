#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i = 1;
	double ort = 0;
	
	while (i < argc)
	{
		ort += atof(argv[i]);
		
		i++;
	}
	
	ort /= (argc - 1);
	
	printf("%g", ort);
	
	getch();
	return 0;
}

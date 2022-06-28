#include <stdio.h>

int main()
{
	FILE *fp = fopen("Sorular.txt", "wb");
	int i;
	
	fprintf(fp, "ÇÖZÜMLER\n--------\n");
	
	for (i = 1; i <= 50; i++)
	{
		fprintf(fp, "\n%d)", i);
	}
	
	return 0;
}
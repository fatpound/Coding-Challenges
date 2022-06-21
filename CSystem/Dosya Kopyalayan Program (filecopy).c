#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		char *w = "_file_name>";
		
		printf("Too %s parameters!\n\nUsage: filecopy <source%s <dest%s", argc < 3 ? "few" : "many", w, w);
		
		getch();
		exit(1);
	}
	
	FILE *src = fopen(argv[1], "rb"), *dest = fopen(argv[2], "wb");
	
	if (!src || !dest)
	{
		printf("%s file%s cannot be %sed%s!", src ? "Target" : (dest ? "Source" : "Both"), (!src && !dest) ? "s" : "", src ? "creat" : "open", (!src && !dest) ? " and created" : "");
		
		if (src)
		{
			fclose(src);
		}
		
		getch();
		exit(1);
	}
	
	int k = 0;
	
	while ((k = fgetc(src)) != EOF)
	{
		fprintf(dest, "%c", k);
	}
	
	fclose(src);
	fclose(dest);
	
	return 0;
}

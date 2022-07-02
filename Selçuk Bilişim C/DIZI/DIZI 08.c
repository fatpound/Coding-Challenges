#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, b, flag = 0, temp;
	char d[101], k[101];
	
	printf("lutfen bir cumle giriniz : ");
	gets(d);
	
	printf("cumleden silmek istediginiz kelimeyi giriniz : ");
	gets(k);
	
	for (b = 0; k[b] != '\0'; b++);
	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] == k[0] && b > 1)
		{
			temp = i;
			
			for (j = 0; j < b; j++, temp++)
			{
				if (d[temp] != k[j])
				{
					flag = 1;
					break;
				}
			}
			
			if (flag == 0 && (d[i + b] == ' ' || d[i + b] == '\0'))
			{
				for (temp = i; temp < i + b; temp++)
				{
					d[temp] = ' ';
				}
			}
		}
	}
	
	while (1)
	{
		flag = 0;
		
		for (i = 0; i < d[i] != '\0'; i++)
		{
			if (d[i - 1] != ' ' && d[i] != ' ' && d[i + 1] == ' ' && d[i + 2] == ' ')
			{
				for (j = i + 2; j < d[j] != '\0'; j++)
				{
					if (d[j] == ' ' && d[j + 1] != ' ')
					{
						d[j] = d[j + 1];
						d[j + 1] = ' ';
						flag = 1;
					}
				}
			
				if (flag == 0) break;
			}	
		}
		
		if (flag == 0) break;
	}
	
	if (b == 1) printf("aranacak kelime yerine harf girdiniz");
	else if (b == 0) printf("aradiginiz kelime cumlede gecmemektedir");
	else printf("cumlenin yeni hali = %s", d);
	
	getch();
	return 0;
}

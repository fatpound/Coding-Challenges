#include <stdio.h>
#include <conio.h>

int main()
{
	int x;
	
	printf("lutfen 1-7 arasinda bir tamsayi giriniz: ");
	scanf("%d",&x);
	
	printf("\n");
	
	if(x==1) printf("haftanin ilk gunu pazartesidir");
	else if(x==2) printf("haftanin ikinci gunu salidir");
	else if(x==3) printf("haftanin ucuncu gunu carsambadir");
	else if(x==4) printf("haftanin dorduncu gunu persembedir");
	else if(x==5) printf("haftanin besinci gunu cumadir");
	else if(x==6) printf("haftanin altinci gunu cumartesidir");
	else if(x==7) printf("haftanin son gunu pazardir");
	
	getch();
	return 0;
}
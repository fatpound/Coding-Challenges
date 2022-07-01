#include <stdio.h>
#include <conio.h>

#define SWAP(x, y) (x ^= y ^= x ^= y)

void Sirala(char dizi[])
{
	int i, j, t = 0, temp, isaret, length, index = 0, ti = 0, tii = 0, start[10] = { 0 }, end[10] = { 0 };
	
	for (length = 0; dizi[length]; length++);
	
	for (i = 0; i <= length; i++) // kelimelerin baslangicini ve sonunu kontrol
	{
		if (t == 0 && dizi[i] != ' ' && (dizi[i - 1] == ' ' || i == 0))
		{
			start[index] = i; // kelimelerin baslangic indislerini sirayla bir diziye aldik (10 tane degisken kullanmaktan iyidir)
			t = 1; // her harf buldugunda mevcut indisi baslangic indisi olarak atamasin diye t'yi degistirdik (program basinda 0 olarak atandi ki kelime alimina baslayalim)
		}
		
		if (dizi[i - 1] != ' ' && (dizi[i] == ' ' || dizi[i] == 0)) // taranan indisin bir oncesi harf ve sonrasi ya bosluk ya dizi sonu ise
		{
			end[index] = i; // kelimelerin bitis indislerini sirayla bir diziye aldik
			
			t = 0; // yeni kelimeye gecildigini belirtmek icin
			index++; // baslangic bitis indislerini sakladigimiz dizinin indexini 1 artirdik ki diger kelimenin indislerini depolayalim
		}
	}
	
	while (1) // kelime bas harfleri kontrol ve duruma gore indis siralama
	{
		isaret = 0;
		
		for (temp = 0; temp < 9; temp++)
		{
			if (dizi[start[temp]] > dizi[start[temp + 1]])
			{
				isaret = 1;
				
				// kelimelerin baslangic noktalarinin takas edilmesi boylece en son yazdirirken aradigimiz sirada olsunlar
				SWAP(start[temp], start[temp + 1]);
				
				///////////////////////////
				SWAP(end[temp], end[temp + 1]);
			}
			else if(dizi[start[temp]] == dizi[start[temp + 1]]) // bas harfler ayniysa diger harfleri kontrol ederiz
			{
				ti = start[temp]; // ilk kelimenin harflerini taramak icin
				tii = start[temp + 1]; // ikinci kelimenin harflerini taramak icin
				
				do // do while kullandim cunku go gogl gibi ikili kelime kullaninca ggl yaziyordu
				{
					ti++;
					tii++;
				}
				while (dizi[ti] == dizi[tii]); // kelimenin icindeki harfleri esit oldugu surece tarariz ve esitlik bozuldugunda harflerin hangisi kucuk onu inceleriz ve once yazdirilacak kelimeyi belirleriz
				
				if (dizi[ti] > dizi[tii])
				{
					isaret = 1;
					
					SWAP(start[temp], start[temp + 1]);
					SWAP(end[temp], end[temp + 1]);
				}
			}
		}
		
		if (isaret == 0) break;
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = start[i]; j < end[i]; j++)
		{
			printf("%c", dizi[j]);
		}
		
		if (i != 9) printf("\n");
	}
}

int main()
{
	char dizi[255];
	
	printf("lutfen 10 farkli isim giriniz > ");
	gets(dizi);
	
	printf("\n");
	
	Sirala(dizi);
	
	getch();
	return 0;
}

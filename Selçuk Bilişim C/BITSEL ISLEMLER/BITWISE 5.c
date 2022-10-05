#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int b, i, sifirlar, birler = 0, index = 31;
    char binary[33];

    for(i = 0; i < 32; i++)
    {
        binary[i] = '0';
    }
    
    binary[32] = 0;

    printf("lutfen bir sayi giriniz: ");
    scanf("%u",&b);

    while(b)
    {
        binary[index] = (b & 1) | 48;
        b >>= 1;
        index--;
    }

    printf("%s\n", binary);
    
    for(i = 0; i < 32 ; i++)
    {
        if(binary[i] == 49) break;
    }

    for(index = i; index < 32; index++)
    {
        if((binary[index] & 1) == 1)
        {
            birler++;
        }
    }
    
    sifirlar = 32 - i - birler;

    printf("binary sayidaki birlerin sayisi = %d\n", birler);
    printf("binary sayidaki sifirlarin sayisi = %d", sifirlar);

	getch();
	return 0;
}

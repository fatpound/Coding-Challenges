#include <stdio.h>
#include <conio.h>

int main(void)
{
    unsigned int cevap = 0, dogru = 0b0011111000011101;
    int dogruSayisi = 0;
    char c = 0;
    int i;

    // int c = 0;

    printf("cevaplari giriniz: ");

    /*

    for (int i = 0; i < 16; i++)
    {
        scanf_s("%d", &c);
        dogruSayisi += (((dogru >> i) & 1) == (c & 1)) ? 1 : 0;
    }

    */

    for(i = 15; i > -1; i--)
    {
        c = getch();

        if(c == 'D' || c == 'd')
        {
            cevap |= (((dogru >> i) & 1) == 1) ? 1 : 0;
            cevap <<= 1;
        }
        else if(c == 'Y' || c == 'y')
        {
            cevap |= (((dogru >> i) & 1) == 0) ? 1 : 0;
            cevap <<= 1;
        }
        else
        {
            printf("Hatali girdi\n");
            i++;
        }
    }

    cevap = ~(cevap ^ dogru);

    for(i = 0; i < 16; i++)
    {
        if(((dogru >> i) & 1) == ((cevap >> i) & 1)) dogruSayisi++;
    }

    printf("dogru cevap sayiniz = %d\n", dogruSayisi);

    getch();
    return 0;
}

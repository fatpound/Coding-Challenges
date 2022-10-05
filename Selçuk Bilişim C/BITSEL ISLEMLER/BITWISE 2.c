#include <stdio.h>
#include <conio.h>

int main()
{
    //binary to decimal
    unsigned long int binary, sonuc = 0;
    int i, c = 1;
    char decimal[5];

    printf("lutfen 4 bitlik binary sayi giriniz: ");
    scanf("%lu", &binary);
    for (i = 0; i < 4; i++) // diziyi sifirla doldurma
    {
        decimal[i] = '0';
    }
    decimal[4] = '\0';

    int index = 3;
    while (index != -1) // binary sayimizi diziye aktarma
    {
        decimal[index] = ((binary & 1) | 48);
        binary /= 10;
        index--;
    }
    printf("\n%s\n", decimal); // diziden decimal degerin elde edilmesi

    for (i = 3, c = 1; i > -1; i--)
    {
        sonuc += (c * (decimal[i] ^ 48));
        c *= 2;
    }
    printf("decimal = %lu\n", sonuc);

    ////////////////////////////////////////////////////////////////////////////
    //binary to octal
    unsigned long long int b, s = 0, carpim = 1;
    char octal[9];

    printf("\nlutfen 8 bitlik binary sayi giriniz: ");
    scanf("%llu", &b);
    for (i = 0; i < 8; i++) // diziyi sifirla doldurma
    {
        octal[i] = '0';
    }
    octal[8] = '\0';

    index = 7;
    while (index != -1) // binary sayimizi diziye aktarma
    {
        octal[index] = (b & 1) | 48;
        b /= 10;
        index--;
    }
    printf("\n%s\n", octal);

    for (i = 7, carpim = 1; i > -1; i--) // diziden decimal degerin elde edilmesi
    {
        s += carpim * (octal[i] ^ 48);
        carpim *= 2;
    }
    printf("decimal = %llu\n", s);

    index = 7;
    while (s) // onluk degerin octale cevrilmesi
    {
        octal[index] = (s & 0b111) | 48;
        s >>= 3;
        index--;
    }

    if (index != 0) // octal degerin solundaki fazlaliklarin sifirla doldurulmasi
    {
        for (i = index; i > -1; i--)
        {
            octal[i] = '0';
        }
    }

    printf("octal = %s\n", octal);

    ////////////////////////////////////////////////////////////////////////////
    //binary to hexadecimal
    unsigned long long int temp, bin, hex = 0, carp = 1;
    char hexa[9];
    for (i = 0; i < 8; i++) // diziyi sifirla doldurma
    {
        hexa[i] = '0';
    }
    hexa[8] = '\0';

    printf("\nlutfen 8 bitlik binary sayi giriniz: ");
    scanf("%llu", &bin);

    index = 7;
    while (index != -1) // binary sayimizi diziye aktarma
    {
        hexa[index] = (bin & 1) | 48;
        bin /= 10;
        index--;
    }
    printf("\n%s\n", hexa);

    for (i = 7, carp = 1; i > -1; i--) // diziden decimal degerin elde edilmesi
    {
        hex += carp * (hexa[i] ^ 48);
        carp *= 2;
    }
    printf("decimal = %llu\n", hex);

    index = 7;
    while (hex) // onluk degerin hexadecimale cevrilmesi
    {
        temp = hex & 0b1111;
        hexa[index] = (temp > 9 ? temp + 55 : temp | 48);
        hex >>= 4;
        index--;
    }

    if (index != 0) // hexadecimal degerin solundaki fazlaliklarin sifirla doldurulmasi
    {
        for (i = index; i > -1; i--)
        {
            hexa[i] = '0';
        }
    }

    printf("hexadecimal = %s", hexa);

	_getch();
	return 0;
}

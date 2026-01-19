#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, sayac = 0;

    printf("sayi girin ");
    scanf("%d", &sayi);

    if (sayi < 0)
    {
        sayi = -sayi;
    }
    if (sayi == 0)
    {
        sayac = 1;
    }
    else
    {
        for (; sayi > 0; sayi /= 10)
        {
            sayac++;
        }
    }
    printf("basamak %d\n", sayac);

    printf("sonuc: ");

    for (; sayac > 0; sayac--)
    {
        printf("9");
    }
}

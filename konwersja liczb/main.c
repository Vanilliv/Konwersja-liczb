/*
*Maciej Plonski
*Temat: Konwersja
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba = -1;
    do
    {
        printf("Podaj liczbe od 0 do 65535: ");
        scanf("%d",&liczba);
        printf("\n");
    }while(liczba < 0 || liczba > 65535);
    printf("Twoja liczba %d \n", liczba);
    int tablica[50];
    int i = 0;
    while(liczba > 0){
        tablica[i] = liczba % 2;
        liczba = liczba / 2;
        i++;
    }
    printf("Konwersja binarna trj liczby: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", tablica[j]);
    }
    printf("\n");
    return 0;
}

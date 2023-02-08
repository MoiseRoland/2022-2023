/*
Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int count = 0, somma = 0, a, b, num;
    float media;
    do
    {
        printf("Inserisci A\n");
        scanf("%d", &a);
        printf("Inserisci B\n");
        scanf("%d", &b);
    } while (a > b);
    do
    {
        printf("Inserisci un numero\n");
        scanf("%d", &num);
        if (num<a || num>b)
        printf("Il tuo numero e' fuori dell'intervallo\n");
        else
        {
            somma = somma + num;
            count++;
        }
    } while (num>=a && num<=b);
    media = (float)somma / (float)count;
    printf("La media e' %f\n", media);

    return 0;
}
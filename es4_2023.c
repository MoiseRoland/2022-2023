/*Progettare un algoritmo che effettui la lettura da tastiera di una serie
di coppie di valori numerici reali (sia positivi che negativi che zero).
Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello
minore dei due. Il programma termina quando vengono inseriti dei valori
che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indichi la
ragione per cui non è stato possibile svolgere il calcolo.*/

#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, rapporto;
    do
    {
        printf("Inserisci primo numero\n");
        scanf("%f", &a);
        printf("Inserisci secondo numero\n");
        scanf("%f", &b);
        if (a < b)
            rapporto = a / b;
        else
            rapporto = b / a;
        if (rapporto > 0)
        {
            rapporto = sqrt(rapporto);
            printf("La radice quadrata del rapporto e': %f\n", rapporto);
        }
        else
            printf("Non e' possibile calcolare la radice di un numero < 0");
    } while (a > 0 && b > 0);
}
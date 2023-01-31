/*Esercizio 1
Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.*/

#include <stdio.h>
void main()
{
    float primo, secondo;
    float rapporto;

    do
    {
        printf("Inserisci i due valori:\n");
        scanf("%f", &primo);
        scanf("%f", &secondo);

        if (primo < secondo)
            rapporto = primo / secondo;
        else
            rapporto = secondo / primo;

        printf("Il rapporto dei due numeri e' di: %f\n", rapporto);
    } while (primo != 0 && secondo != 0);
}
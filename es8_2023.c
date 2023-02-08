/*
Progettare un algoritmo che risolve il seguente problema. Si desidera
calcolare la somma delle radici quadrate di N valori numerici inseriti
dall’utente, con N inserito in input.
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int N, num, count = 0;
    float somma = 0;
    do
    {
        printf("Inserisci N maggiore di zero: ");
        scanf("%d", &N);
    } while (N <= 0);
    do
    {
        printf("Inserisci numero: \n");
        scanf("%d", &num);
        count++;
        if (num >= 0)
        {
            somma = somma + sqrt(num);
        }
        else
        {
            printf("Hai inserito un numero minore di 0\n");
        }
    } while (count < N && num >= 0);
    printf("La somma e': %f", somma);
    
    return 0;
}
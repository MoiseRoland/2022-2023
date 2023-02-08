/*Progettare un algoritmo che risolva il seguente problema. Si richieda
all’utente di inserire una serie di terne di dati numerici (A, B, C).
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c, min = 0, max = 0;
    do
    {
        printf("Inserisci a\n");
        scanf("%d", &a);
        printf("Inserisci b\n");
        scanf("%d", &b);
        printf("Inserisci c\n");
        scanf("%d", &c);

        if (a < b && b < c)
        {
            min = a;
            max = c;
        }
        else
            printf("Non valido\n");
    } while (a >= 0 && b >= 0 && c >= 0);
 printf("Min: %d\n", min);
  printf("Max: %d\n", max);
    return 0;
}
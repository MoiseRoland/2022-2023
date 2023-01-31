/*Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
0 (zero)
• per ogni coppia di numeri letti:
◦ calcoli il prodotto dei due numeri e ne stampi il valore
◦ sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
• all’uscita del ciclo, stampi il valore della somma*/

#include <stdio.h>
void main()
{
    int num1, num2, prod, somma = 0;
    do
    {
        printf("Inserisci primo numero: \n");
        scanf("%d", &num1);
        printf("Inserisci secondo numero: \n");
        scanf("%d", &num2);
        prod = num1 * num2;
        somma = somma + prod;
        printf("Il prodotto e' di: %d\n", prod);
    } while (num1 != 0 && num2 != 0);
    printf("La somma finale e' di: %d\n", somma);
}
/*
Progettare un algoritmo che effettui le seguenti operazioni:

• continui a leggere da tastiera una serie di terne di valori interi A ,
B e C finchè non vengono inseriti dei valori tali per cui A + B < C
• conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
• prima di terminare, visualizzi il valore dei valori conteggiati*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int a, b, c;
	int pari = 0, dispari = 0, nulla = 0;
	do
	{
    	printf("Inserisci valore A\n");
    	scanf("%d", &a);
    	printf("Inserisci valore B\n");
    	scanf("%d", &b);
    	printf("Inserisci valore C\n");
    	scanf("%d", &c);

    	if (a - b == 0)
        	nulla++;
    	else if ((a - b) % 2 == 0)
        	pari++;
    	else
        	dispari++;
	} while (a + b >= c);
	printf("Numeri pari: %d\n", pari);
	printf("Numeri dispari: %d\n", dispari);
	printf("Numeri nulli: %d\n", nulla);
	return 0;
}

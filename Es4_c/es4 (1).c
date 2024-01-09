#include <stdio.h>

int numeroPrimo(int numero) {
    int primo = 1;

    if(numero < 0)
        numero = numero * (-1);

    if(numero == 0 || numero == 1)
        primo = 1;
    else {
        for(int iteratore = 2; iteratore < numero && primo; iteratore++){
            if(numero % iteratore == 0) 
                primo = 0;
        }
    }

    return primo;
}

int main(void) {
    int numeroInserito;
    int stampareNumero = 1;

    do {
        printf("Inserire il numero di arrivo : ");
        scanf("%d", &numeroInserito);

        if(numeroInserito <= 0)
            printf("Errore : il numero inserito deve essere positivo");
    } while(numeroInserito <= 0);

    for(int iteratore = 0; iteratore <= numeroInserito; iteratore++){
        if(numeroPrimo(iteratore) && stampareNumero)
            printf("Il numero %d e' primo\n", iteratore);

        stampareNumero = !stampareNumero;
    }

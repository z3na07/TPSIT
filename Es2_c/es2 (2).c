#include <stdio.h>
int main()
{
    int prezzo; 
    double prezzoScontato;
    int scelta;
    printf("Inserisci 1 per cominciare a inserire gli importi\n");
    scanf("%d", &scelta);
    if(scelta!=1){
        printf("ERRORE");
    }
    while(scelta==1)
    {

    printf("Inserire importo totale ");
    scanf("%d", &prezzo);
    if(prezzo<0){
        printf("Prezzo inserito non valido \n");
    }
    else if(0<prezzo<500){
        printf("Lo sconto è del 10 \n");
        prezzoScontato=prezzo-(prezzo/100)*10;
        printf("L'importo netto è di %f \n", prezzoScontato);


    }
    else if(501<prezzo<1000){
        printf("Lo sconto è del 20  \n");
        prezzoScontato=prezzo-(prezzo/100)*20;
        printf("L'importo netto è di %f \n", prezzoScontato);


    }
    else{
        printf("Lo sconto è del 30 \n");
        prezzoScontato=prezzo-(prezzo/100)*30;
        printf("L'importo netto è di %f \n", prezzoScontato);

    }
    printf("Vuoi inserire un altro importo? \n");
    printf("1(si)     2(no)");
    scanf("%d", &scelta);
    }








}
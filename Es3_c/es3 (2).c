#include <stdio.h>
int main()
{
    int qta;
    int numero;
    int sommaPositivi, sommaNegativi;
    int contPositivi, contNegativi;
    double mediaPos, mediaNeg;
//inserimento della quantità di numeri che si desidera immettere
printf("Quanti numeri si desiderano inserire? \n");
scanf("%d", &qta);
for(int i;i<qta;i++){
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    if(numero>0){
        sommaPositivi=sommaPositivi+numero;
        contPositivi++;
    }
    else if(numero<0){
        sommaNegativi=sommaNegativi+numero;
        contNegativi++;
    }
    //calcoli
    mediaNeg=sommaNegativi/contNegativi;
    mediaPos=sommaPositivi/contPositivi;
    sommaNegativi=sommaNegativi*-1;
    
}
//output finali
    printf("La somma dei numeri negativi è: %d\n", sommaNegativi);
    printf("La media dei numeri negativi è: %f\n", mediaNeg);
    
    printf("La media dei numeri positivi è: %f\n", mediaPos);
    printf("La somma dei numeri positivi è: %d\n", sommaPositivi);



}

#include <stdio.h>
int main()
{
    //dichiarazione variabili
    float prezzo=0;
    float media=0, somma=0;
    float max,min;
    float media1;
    char scelta='s';
    int cont, cont1;
    //processo do_ whule
    do{
        printf("Inserire prezzo azione \n");
        scanf("%f", &prezzo);
        do{
             printf("Inserire prezzo azione \n");
            scanf("%f", &prezzo);
        }while(prezzo<=0)
        somma=somma+prezzo;
        if(prezzo>3.5 || prezzo<2.5){
            cont++;
            media=somma/cont;
        }
        else{
            cont1++;
            media1=somma/cont1;
        }
        
        
        if(prezzo>max){
            max=prezzo;
        }
        if(Prezzo<min){
            min=prezzo;
        }
        printf("Il prezzo piu alto e %f \n",max);
        printf("Il prezzo piu basso e %f \n",min);
        printf("vuoi aggiungere un altro prezzo? digita s se si, altrimenti digita qualsiasi altra lettera per finire \n");
        scanf("%c", &scelta);
    }while(scelta=='s')



    






}
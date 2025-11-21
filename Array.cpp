//Gli array sino variabili che poddono contenere piu di un valore


#include <iostream>

int main()
{
    //definire un array
    int numbers[10];
    //popolare un array
    numbers[0] = 1;

    //ARRAY MULTIDIMENSIONALI
    //type name[size1][size2]
    int f[1][2][3];
    char s[1][5] = { 'a','e','i','o','u' }
        //ARRAY BIDIMENSIONALI
        //array bidimensionale è un elenco di array
        //type arrayname[x][y];

        //INIZZIALIZZAZIONE DEGLI ARRAY BIDIMENSIONALI
    int a[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };

    //ACCESSO ad un elemento USANDO L'INDICE DELLLE RIGHE E DELLE CLONNE
    int val = b[2][3];
    //CONDIZIONI - STRUTTURE DECISIONALI 
    int target = 10;
    if (target == 10) {
        printf("target e uguale a 10");
    }
    //ELSE IF -->serve per concatenare piu condizioni 
    //if(a>b){
    //printf("a e maggiore  10");
    //}else if(a<b) {
    //return b
    //}else if(a==b){
    //printf("a e uguale a b);}


}

/*È un modo per chiedere memoria durante l’esecuzione del programma, non prima.
Cioè la quantità di memoria la decidi mentre il programma sta girando, 
ad esempio in base a un numero inserito dall’utente.*/

/*malloc/calloc = prenoti un certo numero di posti

realloc = allarghi o riduci la tua prenotazione

free = restituisci i posti al parcheggio

Se non chiami free() → stai bloccando parcheggi inutilmente (memory leak)*/
#include <stdio.h>    // Libreria standard per input/output (printf, scanf)
#include <stdlib.h>   // Necessaria per malloc(), free(), realloc(), calloc()

int main() {

    // 1) CHIEDO QUANTI NUMERI VUOLE INSERIRE L'UTENTE
    int n;
    printf("Quanti numeri vuoi memorizzare? ");
    scanf("%d", &n);    // &n = indirizzo di n dove viene salvato il numero inserito


    // 2) ALLOCO DINAMICAMENTE UN VETTORE DI n interi
    // malloc riserva n * sizeof(int) byte di memoria.
    // sizeof(int) = quanti byte occupa un int (solitamente 4).
    // Il risultato di malloc è un "puntatore a void", quindi lo assegnamo a un puntatore a int.
    int* v = malloc(n * sizeof(int));

    // 3) CONTROLLIAMO SE L’ALLOCAZIONE È ANDATA A BUON FINE
    // Se malloc fallisce (!= memoria insufficiente), restituisce NULL.
    if (v == NULL) {
        printf("Errore: memoria non allocata.\n");
        return 1;   // Termine il programma perché non posso proseguire
    }


    // 4) RIEMPIO IL VETTORE CON I VALORI INSERITI DALL’UTENTE
    // Uso v come un normale array: v[0], v[1], ..., v[n-1]
    for (int i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &v[i]);   // salvo ogni numero nella cella giusta
    }


    // 5) STAMPO IL CONTENUTO DEL VETTORE PER VERIFICARE CHE TUTTO FUNZIONA
    printf("\nHai inserito questi numeri:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);  // stampo ogni elemento
    }
    printf("\n");   // vado a capo


    // 6) LIBERO LA MEMORIA
    // IMPORTANTISSIMO!!!
    // Tutta la memoria allocata con malloc/calloc/realloc deve essere liberata con free().
    free(v);


    // 7) FINE PROGRAMMA
    return 0;
}

//RICORSIONE

/*La ricorsione è una tecnica in cui una funzione chiama se stessa 
per risolvere un problema più grande trasformandolo in problemi più piccoli.*/


/*LA USIAMO QUANDO :
 -Problemi che si definiscono naturalmente in termini ricorsivi
 -strutture dati ricorsive(alberi,grafi)
 -ALGORITMI DIVIDE ET IMPERA (QUICK SORT, MERGE SORT)*/

/*stampare i numeri da 1 a n usando una funzione ricorsiva.*/

#include <iostream>
using namespace std;

// Funzione ricorsiva che stampa i numeri da 1 a n
void stampaNumeri(int n) {

    // ======== CASO BASE ========
    // Se n arriva a 0, non dobbiamo stampare più nulla.
    // Questo serve a fermare la ricorsione.
    if (n == 0) {
        return;   // interrompe la funzione
    }

    // ======== PASSO RICORSIVO ========
    // Chiamo la funzione con n-1.
    // Questa chiamata "va indietro" fino al caso base.
    stampaNumeri(n - 1);

    // Dopo che la ricorsione risale,
    // stampiamo il numero corrente.
    // Questo fa sì che i numeri escano in ordine crescente.
    cout << n << " ";
}

int main() {

    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    cout << "Numeri da 1 a " << n << ": ";
    stampaNumeri(n);    // avvio della ricorsione
    cout << endl;

    return 0;
}

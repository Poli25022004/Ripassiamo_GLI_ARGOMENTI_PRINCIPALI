/*Una lista collegata è una specie di catena di scatole.
Ogni scatola contiene:

Un valore (un numero, un dato…)

Un puntatore → cioè l’indirizzo della scatola successiva
Se il puntatore vale NULL, significa che quella scatola è l’ultima della catena.*/

/*Perché usare liste collegate invece degli array?
Vantaggi

✔ Puoi aggiungere o togliere elementi in mezzo alla lista
✔ Non devi sapere prima quanto è grande
✔ Cresce e si restringe dinamicamente

Svantaggi

✘ Non puoi saltare direttamente a un elemento (come l’indice negli array)
→ devi partire sempre dalla testa e avanzare passo passo
✘ Usi puntatori e malloc → più rischio di errori
✘ Ogni nodo occupa più memoria (perché memorizza anche il puntatore)*/
//Com’è fatto un nodo
#include <stdio.h>
#include <cstdlib>
int main()
{
    typedef struct node {
        int val;
        struct node* next;
    } node_t;
    //Come si crea il primo nodo
    node_t* head = NULL; // lista vuota

    head = malloc(sizeof(node_t)); // creo primo nodo
    head->val = 1;
    head->next = NULL; // ultimo nodo

    //Come scorro tutta la lista ++
    void print_list(node_t * head) {
        node_t* current = head;

        while (current != NULL) {
            printf("%d\n", current->val);
            current = current->next; // passo al nodo dopo
        }
    }
    //Aggiungere un elemento alla fine
    void push(node_t * head, int val) {
        node_t* current = head;

        while (current->next != NULL) { // trova l’ultimo
            current = current->next;
        }

        current->next = malloc(sizeof(node_t)); // nuovo nodo
        current->next->val = val;
        current->next->next = NULL;
    }
    //Aggiungere un elemento all’inizio
    void push(node_t * *head, int val) {
        node_t* new_node = malloc(sizeof(node_t));

        new_node->val = val;
        new_node->next = *head;  // collego il nuovo nodo alla vecchia testa
        *head = new_node;        // la nuova testa è il nuovo nodo
    }
    //Rimuovere il primo elemento
    int pop(node_t * *head) {
        if (*head == NULL) return -1;

        node_t* next_node = (*head)->next;
        int val = (*head)->val;

        free(*head);     // elimino il primo nodo
        *head = next_node; // nuova testa

        return val;
    }
    //Rimuovere l’ultimo nodo
    int remove_last(node_t * head) {
        if (head->next == NULL) { // se c’è un solo nodo
            int val = head->val;
            free(head);
            return val;
        }

        node_t* current = head;

        while (current->next->next != NULL) {
            current = current->next;
        }

        int val = current->next->val;
        free(current->next);
        current->next = NULL;

        return val;
    }
    //Rimuovere un nodo in una posizione precisa
    int remove_by_index(node_t * *head, int n) {
        if (n == 0) return pop(head);

        node_t* current = *head;

        // vai al nodo precedente a quello da rimuovere
        for (int i = 0; i < n - 1; i++) {
            if (current->next == NULL) return -1;
            current = current->next;
        }

        node_t* temp = current->next; // nodo da togliere
        if (temp == NULL) return -1;

        int val = temp->val;
        current->next = temp->next;
        free(temp);

        return val;
    }
}
/*
+ ------ - +---------- + +------ - +---------- + +------ - +---------- +
| val = 1 | next---- + ---- > | val = 2 | next---- + ---- > | val = 3 | next = NULL |
+------ - +---------- + +------ - +---------- + +------ - +---------- +
head
*/

//Scorrere la lista

/* head → [1] → [2] → [3] → NULL
          ↑      ↑      ↑
    current   current  current
*/

//Aggiungere un nodo alla fine

/*    head → [1] → [2] → NULL
*/

//Aggiungere un nodo all’inizio
/*   head [0]→ [1] → [2] → [3] → NULL
*/


/*schema generale di un nodo
* 
+--------------------------+
|          NODE            |
|--------------------------|
|   val     |   next       |
|-----------|--------------|
|    42     |   → altro    |
+--------------------------+
*/
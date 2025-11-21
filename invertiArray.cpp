//come invertire gli elementi di un array

#include <iostream>

int main()
{
    int array[] = { 1,2,3,4,5,6,7,8,9 };
    int lunghezza = 9;
    int temp = 0;

    for (int i = 0; i < (lunghezza / 2); i++) {
        temp = array[i];
        array[i] = array[lunghezza - i - 1];
        array[lunghezza - i - 1] = temp;
    }
    for (int i=0;i<lunghezza;i++){
        printf("array[%d] = %d\n", i, array[i]);
    }


    return 0;
}

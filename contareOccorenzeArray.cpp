//contiamo le occorrenze di un valore in un array
#include <stdio.h>

int main()
{
	int array[] = { 4,9,7,6,5,8,3,2,1,5 };

	int count = 0;

	int trova = 5;

	for (int i = 0; i < 10; i++) {

		if (array[i] == trova)
			count++;
	}
	printf("Numeri 5 trovati: %d\n", count);
	return 0;

}

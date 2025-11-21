
#include <stdio.h>

int main()
{
	int Array[] = { 5,9,10,11,4,3,8,6,7 };
	int min;
	min = Array[0];
	for (int i = 0; i < 9; i++) {
		if (Array[i] < min)   //se il mio array è minore di min
			min = Array[i];  //allora rendi min uguale al mio array
	}
	printf("minimo: %d \n", min);
	return 0;
}


#include <stdio.h>

void forEach(int *array, int size, void (*pFuntion)(int item)) {
	for(int i = 0 ; i < size ; i++) {
		pFuntion(array[i]);
	}
	return;
}

void Printer(int item) {
	printf("%d",item);
}

int main() {
	int array[] = {1,6,8,5,3,3};
	forEach(array,6,Printer);
}
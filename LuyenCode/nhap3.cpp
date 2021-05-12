#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void swap(long *a,long *b){
    long temp = (*a);
    (*a) = (*b);
    (*b) = (*a);
}
int main() {
    long a=4;
    long b=8;
    swap(&a,&b);
    printf("%li %li",a,b);
    return 0;
}
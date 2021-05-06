#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int *array;
    array=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(array+i));
    }
    int s=0;
    for(int i=0;i<n;i++)
    s+= *(array+i);
    fflush(stdout);
    printf("%d",s);
    free(array);
    return 0;
}
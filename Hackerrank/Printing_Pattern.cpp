#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{   
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int canh=2*n-1;
    int array[canh][canh];
    int k=0;
    int t=canh;

    while(k<canh&&t>=0){
        for(int i=k;i<t;i++){
            for(int j=k;j<t;j++){
                array[i][j]=n-k;
            }
        }
        k++;
        t--;
    }
    for(int i=0;i<canh;i++){
        for(int j=0;j<canh;j++){
            printf("%2d",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
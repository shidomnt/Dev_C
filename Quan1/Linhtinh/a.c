#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char a[5];
    int i;
    for(i=0; i<5; i++){
        scanf("%c", &a[i]);
    }
    
    printf("\n%s", a);

    return 0;
}
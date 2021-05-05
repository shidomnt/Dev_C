#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char so[30];
    while(scanf("%[0-9]",so)){
        if(so[0]==so[strlen(so)-1])
            printf("YES\n");
        else
            printf("NO\n");
        fflush(stdin);
    }
    return 0;
}
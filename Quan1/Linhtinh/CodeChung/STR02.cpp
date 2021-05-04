#include<stdio.h>
#include<string.h>
int main(){
    int T,i;
    scanf("%d", &T);
    char ten[T][100];
    for(i=0;i<T;i++){
        fflush(stdin);
        scanf("%[^\n]", ten[i]);
    }
    for(i=0;i<T;i++){
        int j;
        
        for(j=1;j< strlen(ten[i]); j++){
            if(ten[i][j]<=90 && ten[i][j]>=65){
                ten[i][j]+=32;
            }
        }    
        for(j=0;j< strlen(ten[i]); j++){
            
            if(ten[i][j-1]==32){
                ten[i][j]-=32;
            }
            if((ten[i][j]>122||ten[i][j]<97)&&(ten[i][j]>90||ten[i][j]<65)&&ten[i][j]!=32){
                int a=j;
                for(a; a<strlen(ten[i]);a++){
                    ten[i][a]=ten[i][a+1];
                }
                j--;
            }
        }
        if(ten[i][0]<=122 && ten[i][0]>=97){
            ten[i][0]-=32;
        }
        printf("%s\n", ten[i]);
    }
    return 0;
}
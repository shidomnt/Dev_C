#include<stdio.h>
#include<math.h>
#include<string.h>
int xoaDauCachDauCau(char arr[]){
    int i;
    for(i=0;i<strlen(arr);i++){
            arr[i]= arr[i+1];            
        } 
    if(arr[0]==32) return xoaDauCachDauCau(arr);
}
int main(){
    char arr[]= "   asfasf";
    if(arr[0]==32) xoaDauCachDauCau(arr);
    printf("%s", arr);
    return 0;
}
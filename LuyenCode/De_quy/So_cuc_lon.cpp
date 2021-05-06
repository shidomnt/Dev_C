#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void tich(char *a1,char *a2,char *ketqua){


    
}
int main(){
    char *array1;
    array1=(char*) malloc(100*sizeof(char));
    printf("Nhap so thu nhat: ");
    scanf("%[^\n]",array1);
    char *array2;
    array2=(char*) malloc(100*sizeof(char));
    printf("Nhap so thu hai: ");
    scanf("%[^\n]",array2);
    char *ketqua;
    ketqua=(char*) malloc(500*sizeof(char));
    tich(array1,array2,ketqua);
    for(int i=0;i<strlen(ketqua);i++){
        

    free(array2);
    free(array1);
    }
}
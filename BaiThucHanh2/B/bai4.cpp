#include<stdio.h>
#include<conio.h>
int main(){
    int nam;
    printf("Nhap vao nam: ");
    scanf("%d",&nam);
    printf("Nam %d thuoc can: ",nam);
    switch(nam%10){
        case 0: printf("Canh");
        break;
        case 1: printf("Tan");
        break;
        case 2: printf("Nham");
        break;
        case 3: printf("Quy");
        break;
        case 4: printf("Giap");
        break;
        case 5: printf("At");
        break;
        case 6: printf("Binh");
        break;
        case 7: printf("Dinh");
        break;
        case 8: printf("Mau");
        break;
        case 9: printf("Ky");
    }
    getch();
}
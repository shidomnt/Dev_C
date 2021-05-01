#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
    int ga,cho;
    for(ga=1;ga<=36;ga++){
        for(cho=1;cho<=36;cho++){
            if(ga+cho==36&&ga*2+cho*4==100){
                printf("So ga la: %d\n",ga);
                printf("So cho la: %d",cho);
                break;
            } 
        }
    }
    getch();
}
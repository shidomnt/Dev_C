#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void sapxep(char *string){
    int length=strlen(string);
    for(int i=0;i<length-1;i++)
        for(int j=i+1;j<length;j++){
            if(string[j]<string[i]){
                char temp=string[j];
                string[j]=string[i];
                string[i]=temp;
            }
        }
}
int main() {
    char a[30];
    gets(a);
    sapxep(a);
    puts(a);
    return 0;
}
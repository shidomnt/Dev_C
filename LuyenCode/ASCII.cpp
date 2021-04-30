#include<stdio.h> //ddd
int main(){
	printf("DEC\tHEX\tCHAR\n");
	printf("====================\n");
	for(int i=0;i<=256;i++){
		printf("%d\t%X\t%c\n",i,i,i);
	}
}

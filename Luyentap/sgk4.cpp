#include<stdio.h>
#include<math.h>
int main(){
	int i;
	for(i=100;i<=999;i++){
		int tram=i/100,chuc=(i-tram*100)/10,donvi=(i-tram*100-chuc*10);
		if(i==pow(tram,3)+pow(chuc,3)+pow(donvi,3)) printf("%d\n",i);
	}
}

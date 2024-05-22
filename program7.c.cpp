#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//program 7

int main(){
	int i,j,sayi;
	int dizi[5][6];
	int*p = &dizi[0][0];
	int toplam =0;
	
	for(i=0;i<=5;i++){
		for(j=0;j<=6;j++){
			sayi= rand()%10;
			printf("\ndizi[%d][%d]= %d",i,j,sayi);
		}
		printf("\n");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
Program 3 : 
Bellekten malloc() fonksiyonu ile �ok b�y�k bir alan almaya �al���n�z. En fazla ka� MB�l�k alan 
alabildi�ini bulunuz. Bu sorunun ��z�m� i�in realloc() fonksiyonunu kullanabilirsiniz. 
int k=1;
int *p;
p=(int *)malloc(k*sizeof(int));
 pointer, dizi ve de�i�kenlerin ayr� ayr� sat�rlarda 
tan�mlanmas�n�n daha isabetli bir se�im oldu�unu unutmay�n�z. 
*/


int main(){
	int i;
	int *p;
	
	i= 1000000;
	do{
		
		p = (int*)malloc(i*sizeof(int));
		if(p){
			
			printf("\nbellek adresi alindi..");
			printf("\nadresi%p",p);
			printf("\nal�nan bellek adresi boyutu: %2.2f MB dir.\n",(i*sizeof(int))/(1024.0*1024));
			printf("serbest b�rak!!!");
			free(p);
		}
		else{
			break;
		}
		
		i = i + 1000000;
		
	}while(1);
	
	
	
	return 0;
}

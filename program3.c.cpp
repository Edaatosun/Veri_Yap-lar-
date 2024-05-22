#include <stdio.h>
#include <stdlib.h>

/*
Program 3 : 
Bellekten malloc() fonksiyonu ile çok büyük bir alan almaya çalýþýnýz. En fazla kaç MB’lýk alan 
alabildiðini bulunuz. Bu sorunun çözümü için realloc() fonksiyonunu kullanabilirsiniz. 
int k=1;
int *p;
p=(int *)malloc(k*sizeof(int));
 pointer, dizi ve deðiþkenlerin ayrý ayrý satýrlarda 
tanýmlanmasýnýn daha isabetli bir seçim olduðunu unutmayýnýz. 
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
			printf("\nalýnan bellek adresi boyutu: %2.2f MB dir.\n",(i*sizeof(int))/(1024.0*1024));
			printf("serbest býrak!!!");
			free(p);
		}
		else{
			break;
		}
		
		i = i + 1000000;
		
	}while(1);
	
	
	
	return 0;
}

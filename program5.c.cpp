#include <stdio.h>
#include <stdlib.h>

/*
Program 5 : 
malloc() ile 5 elemanlý bir dizi alýnýz ve içini doldurunuz. Ardýndan ayný diziye 5 eleman daha 
ekleyebilmek için realloc() ile diziyi geniþletiniz ve içini doldurunuz. 10 elemanýn ortalamasýný 
bulduktan sonra diziyi free() ile serbest býrakýnýz. Aþamalarý ekrana yazdýrýnýz. 
*/

int main(){
	int i,k,cevap;
	int average=0;
	int*pi;
	
	pi =(int*)malloc(5*sizeof(int));
	
	
	for(i=0;i<5;i++){
		printf("\n%d.sayýyý giriniz:",i+1);
		scanf("%d",&k);
		pi[i]=k;
		printf("p[%d] = %d, ",i, pi[i]);
		average = average + pi[i];
	}
		printf("ortalama : %d",average/5);
		
		
	printf("\nbu yer size yetmediyse 5 sayilik bir yer daha ayirmami ister misiniz:");
	printf("\neger cevabiniz evetse 1 e basin hayýrsa 0 a basin ");
	scanf("%d",&cevap);
	
	if(cevap == 1){
		
	pi = (int*)realloc(pi, 5 * sizeof(int));
	
	for(i=5;i<10;i++){
		printf("\n%d.sayýyý giriniz:",i+1);
		scanf("%d",&k);
		pi[i]=k;
		printf("p[%d] = %d, ",i, pi[i]);
		average = average + pi[i];
	}
	printf("yeni ortalama : %d",average/10);
	free(pi);
}
    if(cevap==0){
    	printf("ortalama : %d",average/5);
    	free(pi);
	}




	return 0;
}

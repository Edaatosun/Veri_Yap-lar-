#include <stdio.h>
#include <stdlib.h>
int A[101];
int sonEleman = 1;

//HEAP

void tasi(int i){
	int x;
	while(A[i]<A[i/2]){
		
		x = A[i/2];
		A[i/2]=A[i];
		A[i] = x;
		i = i/2;
	}
	return;
}

void ekle(int x){
	A[sonEleman++] = x;
	tasi(sonEleman-1);
	return;
}
void listele(){
	int i;
	for(i=1;i<sonEleman;i++){
		printf("%d ",A[i]);
	}
	return;
}


int main(){
	ekle(10);
	ekle(20);
	ekle(30);
	ekle(15);
	ekle(5);
	listele();
	
	return 0;
}

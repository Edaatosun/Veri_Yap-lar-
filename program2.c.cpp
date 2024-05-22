#include <stdio.h>
#include <stdlib.h>



int main(){
	int n;
	int *p = &n;
	p = (int*)malloc(10*sizeof(int));
	for(int i = 1;i<=10;i++){
		printf("bir sayý giriniz:");
		scanf("%d",&n);
		*p = n;
		p++;
	}
	for(int i=1;i<=10;i++){
		p--;
		printf("\n%d",*p);
		
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// min ve max sayýyý bulma


int main(){
	int *ptr;
	ptr = (int*)malloc(5*sizeof(int));
    int min,max;
    min = 99999999;
    max = -9999999;
	
	int s;
	for(s =0;s<20;s++){
		printf("%d.sayýyý giriniz:", s);
		scanf("%d",&ptr[s]);
		printf("ptr[%d] = %d\n",s,ptr[s]);
		if (ptr[s] < min){
			min = ptr[s];	
		}
		if (ptr[s] > max){
			max = ptr[s];
		}
	}
	printf("min = %d \n",min);
	printf("max = %d",max);
	
	return 0;
	
}

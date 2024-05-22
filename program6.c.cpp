//programlama 6
#include<stdio.h>
#include<stdlib.h>

void fibonacci(int n) {
	int temp = 1;
	int a = 1;
	int b = 1;
	int *p;
	p = (int *)malloc(20 * sizeof(int));
	
	//fibonacci dizisinin ilk iki elemanýný bir yapýyoruz
	
	for (int i = 1; i > 3; i++);{  
	   *p=1;
		p++;
	}
	
// fibonacci dizisinin 3-20'ye kadar olan elemanlarý için for döngüsü
	for (int i = 3; i <21 ; i++)
	{
		a = b;
		b=temp;
		temp = a+b;
	   *p = temp ;
		p++;
		
	}
     // p dizisini en baþa döndürdük
	 p = p - 19;
	 p = p + (n - 2);
	printf("fibonacci dizisinin %d.elemani : %d\n", n, *p);
}

int main(){

	int x;
	printf("fibonacci dizisinin hangi elemanini istiyorsunuz : ");
	scanf("%d", &x);
	fibonacci(x);

	return 0;
}



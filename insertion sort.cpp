#include <stdio.h>
#include <stdlib.h>

//ÝNSERTÝON
struct node {
	int x;
	node * next;
	
	
};

node *head,*tail;

void ekle(int x){
	node *temp = (node*)malloc(1*sizeof(node));
	node *temp2 ,*temp1 = head;
	
	temp->x = x;
	temp->next = NULL;
	if(!head){
		head = tail = temp;
		return;
	}
	if(x>head->x){// sað tarafa koy
	temp->next = head->next;
	head->next=temp;	
	return;
	}
	else{// sol tarafa koy
		temp->next = head;
		head = temp;
	}
	
	do{
		temp2 = temp1->next;
		if(x>temp1->x && x<temp2->x){
			temp1->next = temp;
			temp->next = temp2;
			
		}
		
		
		temp1 = temp1->next;
		
	}while(temp1);
	
	
	
}

void listele(){
	node* temp = head;
	do{
		printf("%d ", temp->x);
		temp = temp->next;
		
		
	}while(temp);
	return;
}


 int main(){
 	ekle(20);
 	ekle(11);
 	ekle(3);
 	ekle(1);
 	ekle(2);
 	listele();
 	return 0;
 }

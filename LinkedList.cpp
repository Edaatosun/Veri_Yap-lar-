#include <stdio.h>
#include <stdlib.h>

//linked list


struct node{
	int data;
	node *next;
	node *prev;
};
struct node *head,*tail;

void ekle(int data){
struct node *temp =(node*)malloc(1*sizeof(node));
temp->data = data;
temp->next = NULL;
temp->prev = NULL;
if (head == NULL && tail== NULL){
	head = temp;
	tail = temp;
	return;
}
else{
	tail->next = temp;
	temp->prev = tail;
	temp->next = NULL;
	tail = temp;
	return;
}


}

void sil(int data){
	struct node *temp = head;
	struct node *temp2,*temp3;
	if(head->data== data){
		head = head->next;
		temp->next = NULL;
		temp->prev = NULL;
		free(temp);
		return;
	}
	int bayrak = 0;
	
	do{
		if(data == temp->data){
			temp2 = temp->prev;
			temp->next = temp3;
			temp2->next =temp3;
			temp3->prev = temp2;
			temp->next = NULL;
			temp->prev = NULL;
			free(temp);
			break;
			bayrak = 1; 
		}
		temp = temp->next;
		
		
		
	}while(temp);
	if(bayrak == 1){
		return;
	}
	

}

void listele(){
	struct node * temp = head;
	do{
		printf("\nDUZ:  data.%d",temp->data);
		temp = temp->next;
		
	}while(temp);

}

int main(void){
ekle(11);
ekle(33);
ekle(22);
listele();
sil(11);
listele();

return 0;
}

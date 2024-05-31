#include <stdio.h>
#include <stdlib.h>

struct student{
	
	int ID;
	float GPA;
	student *next;
	student * prev;
};

struct student *head, *tail;



void ekle(int ID, float GPA){
	struct student * temp = (student*)malloc(1*sizeof(student));
	struct student * temp2 = (student*)malloc(1*sizeof(student));
	temp->ID = ID;
	temp->GPA = GPA;
	temp->next = NULL;
	temp->prev = NULL;
	
	temp2->ID = ID;
	temp2->GPA = GPA;
	temp2->next = NULL;
	temp2->prev = NULL;
	
	if(head == NULL && tail == NULL){
		head = temp2;
		tail = temp2;
		return;
	}
	else{
		temp2 = head;
		head->prev = temp;
		head = temp;
		temp->next = temp2;
		return;
		
	}
	/*
	
	else {
	 tail->next= temp;
	 temp->prev = tail;
	 tail = temp;
	 return ;
	 */

}
void ondenEkle(int ID,float GPA){
	struct student * temp = (student*)malloc(1*sizeof(student));
	
	
}

void sil(int ID){
	 
	struct student *temp = head;
	struct student *temp2 , *temp3;
	
	int bayrak =0; // bayrak çýkmak için
	
	// headi silme
	if(ID == head->ID){
		temp = head;
		head = head->next;
		head->prev = NULL;
		temp->next =NULL;
		temp->prev =NULL;
		free(temp);
		return;
	}

	// aradan silme
	do{
		if(ID == temp->ID){// silmek istediðim yer
		printf("buldum seni %d",ID);// temp2 = önceki temp 3 = sonraki
			temp2 = temp->prev;
			temp3 = temp->next;
			temp2->next = temp3;
			temp3->prev = temp2;
			temp->prev = NULL;
			temp->next = NULL;
			free(temp);
			break;
			bayrak = 1;
		}
		
		temp = temp->next;
	}while(temp);
	if ( bayrak == 1)
	    return;
	    
	    
	// tail silme
	if(ID == tail->ID){
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		temp->prev = NULL;
		temp->next = NULL;
		free(temp);
		return;
	}
	
}




void listele(){
	struct student *temp = head;
	do{
		printf("\nDUZ:   ID: %d  GPA:%f",temp->ID,temp->GPA);
		temp = temp->next;
		
	}while(temp);
}

void terstenListele(){
		struct student *temp = tail;
		do{
			printf("\nTERS: No:%d  AGNO:%f",temp->ID,temp->GPA);
			temp = temp->prev;
		}while(temp);
}







int main(){
	
	ekle(111,3.5);
	ekle(222,3.8);
	ekle(333,2.5);
	ekle(444,2.8);
	listele();
	terstenListele();
	sil(333);
	listele();
	
	return 0;
}

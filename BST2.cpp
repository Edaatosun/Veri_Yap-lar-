#include <stdio.h>
#include <stdlib.h>

// BST CODE

struct node{
	
	int data;
	// küçük : left büyük :right
	node *left;
    node *right;
	
	
};
struct node *root;
void ekle(int x){
	struct node *klon;
	struct node *temp = (node*)malloc(1*sizeof(node));
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	
	if(!root){
		root = temp;
		return;
	}
	klon = root;
	while(1){
		
		if(temp->data > klon->data){
			if(klon->right == NULL){
				klon->right =temp;
				return;
			}
			else{
				klon = klon->right;
				continue;
			}
		}
		if(temp->data < klon->data){
			if(klon->left == NULL){
				klon->left = temp;
				return;
			}
			else{
				klon = klon->left;
				continue;
			}
		}	
	
	}
		
	

	return;
}

void gez(node* temp){ // LVR
	if(temp == NULL){
		return;
	}
	gez(temp->left);
	printf("%d ",temp->data);
	gez(temp->right);
	
}
void bul(int x) {
	node* temp = root;

	while (1) {

		if (x==temp->data){
			printf("evet bulduk, BST de var");
			return;
		}

		if (x > temp->data) {
			if (temp->right == NULL) {

				printf("Aranan eleman bulunamadý.");
				return;
			}
			else {
				temp = temp->right;
				continue;

			}

		}
		else {

			if (temp->left == NULL) {

				printf("Aranan eleman bulunamadý.");
				return;

			}
			else {
				temp = temp->left;
				continue;
			}
		}

	}

	return;

}






int main(){
	ekle(20);
	ekle(30);
	ekle(10);
	ekle(33);
	ekle(15);
	ekle(32);
	ekle(25);
	ekle(28);
	ekle(99);
	ekle(1000);
	gez(root);
	bul(28);
	return 0;
}

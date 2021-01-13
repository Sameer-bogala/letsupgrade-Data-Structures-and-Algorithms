#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node 
{
	int data;
	struct node* next;
};
struct node* head;

void insert_any(int x,int p){
	node *temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=x;
	temp1->next=NULL;
	if(p==0){
		temp1->next=head;
		head=temp1;
		return;
		}
	node *temp2=head;
	for(int i=0;i<p-1;i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	
}
void delete_end(){
	struct node* temp;
	temp=head;
	struct node*temp2=head;
	while(temp->next!=NULL){
		temp2=temp;
		temp=temp->next;
	}
	temp2->next=NULL;
	
	free(temp);
	
}
void print(){
	struct node* temp=head;
	printf("list is :");
	while(temp !=NULL){
		printf("[%d|",temp->data);
		printf("%d]-->",temp->next);
		temp=temp->next;
	}
    printf("\n");
}

int main(){
	head=NULL;
	
	int p,n,i,x;
	    insert_any(9,0);	
	    insert_any(2,1);
	 	insert_any(3,2);
	 	insert_any(4,1);
	 	insert_any(5,2);
	 	
	 	
	 	print();
	printf(" assume first position as '0' \n select  the from right side\n");
	printf("enter how many nodes to delete from end:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		delete_end();
		print();
	}
	

	}

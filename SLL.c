#include<stdio.h>
#include<stdlib.h>

typedef struct node
   {
       int data;
       struct node*next;
   }NODE;
   NODE* head=NULL;

NODE*createnode(){
       NODE* temp=(NODE*)malloc(sizeof(NODE));

       printf("Enter data");
       scanf("%d",&temp->data);
       temp->next=NULL;
       return temp;
}
void addfirst(){
     NODE*th=createnode();
     th->next=head;
     head=th;
}
void addlast(){
    NODE*temp=createnode();
    NODE*th=head;
    while(th->next!=NULL)
        th=th->next;
    th->next=temp;

    }
void insert(int pos){
    NODE*th=head;
if(pos<=0)
    addfirst();
    //if(pos>size)
       // addlast();
    while(pos>1){
        th=th->next;
        pos--;
    }

    NODE*temp=createnode();
    temp->next=th->next;
    th->next=temp;
}

void deletef irst(){
    if(head==NULL){
        printf("List is empty");
        return;
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }

   NODE*temp=head;
   head=head->next;
   free(temp);
   temp=NULL;
}


int main(){

    addfirst();
    addlast();
    insert(3);
    deletefirst();
        return 0;
   }





#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
void main(){
    struct  node *new,*head,*temp;
    int n;
    head =NULL;
    temp=NULL;
    new=NULL;
    printf("enter THE NUMBER OF NODES YOU WANT TO CREATE\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        new= (struct node*)malloc(sizeof(struct node));
        printf("Enter the data part\n");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL){
            head=new;
            temp=new;
        }
        else{
            temp->next=new;
            temp=new;
        }
    }
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    printf("ENTER YOUR CHOICE\n1.INSERTION\n2.DELETION\n");
    int choice;
    scanf("%d",&choice);
if(choice==1){
    printf("Eneter data for the new node\n");
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=NULL;
    printf("Enter the position where you want to insert the new node\n");
    int pos;
    scanf("%d",&pos);
    if (pos == 1){
        new->next=head;
        head=new;

    }
    else if(pos>1 && pos<=n){
        temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
    }
    else{
        printf("Invalid position\n");
        return; 
    }}
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    if(choice==2){
    printf("Enter the position of the node you want to delete\n");
    int pos;
    scanf("%d",&pos);
    if(pos==1){
        temp=head;
        head=temp->next; 
        free(temp);
    }
    else if(pos>1 && pos<=n){
        struct node *p;
        temp=head;
        for(int  i=1;i<pos-1;i++){
            p=temp;
            temp=temp->next;
        }
        p->next=temp->next;
        free(temp);
    }
    else{
        printf("Invalid position\n");
        return;
    }

}
}
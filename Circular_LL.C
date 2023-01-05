#include<stdio.h>
#include<stdlib.h>
int count=0;

struct node{
    int data;
    struct node*next;
    
};
struct node*createnode(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    return temp;
}
struct node*head;
void createlist()
{
    struct node*temp,*new;
    int n=9;
    
    head=NULL;
    temp=head;
    while(n==9){
        new=createnode();
    printf("enter data:");
    scanf("%d",&new->data);
    if(head==NULL){
        head=new;
        temp=head;
    }
    else{
        temp->next=new;
        
        temp=new;
        temp->next=head;
    }
    printf("enter 9 if u want to add a node:");
    scanf("%d",&n);
}}
void displaylist(){
    struct node*temp,*new;
    int c=0;
    temp = head;
    /*while(c<=count){
    
    if(head==NULL){
        printf("empty ll");
    }
    else{
        if(temp==head){
            printf("%d",temp->data);
            temp=temp->next;
        }
        while(temp!=head){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    c++;
    }*/
    do{
        printf("%d",temp->data);
        temp=temp->next;
        
    }while(temp!=head);
}
int main(){
    int n=1,c;
    while(n==1){
    printf("enter ur choice:");
    scanf("%d",&c);
    switch(c){
        case 1:
        createlist();
        break;
        case 2:
        displaylist();
        break;
    }
    printf("enter n=1 if u wqant to do something");
    scanf("%d",&n);
    
    
}
return 0;
}

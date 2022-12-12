#include <stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node*head;

struct node*createnode()
{
 struct node*temp=NULL;
 temp=(struct node*)malloc(sizeof(struct node));
 //temp->data=45;
 //printf("enter data in the node:");
 //scanf("%d",&temp->data);
 temp->next=NULL;
 //printf("the data in the node is:%d",temp->data);
 return temp;
}

void create_queue_using_list()
 {struct node *temp,*new;
 head=NULL;
 temp=NULL;
 //printf("enter 9 for entering new node:");
 //scanf("%d",&n);
 int n=9;
 temp=head;
while(n==9)
 {
     new=createnode();
     if(head==NULL){
         
     
     printf("enter data in for the 1st element of the queue:");
     scanf("%d",&new->data);
     }
     else{
         printf("push new element:");
         scanf("%d",&new->data);
     }
     if(head==NULL)
     {
         head=new;
         temp=new;
     }
     else
     {
        
        temp->next=new;
        temp=new;
     }
     printf("enter 9 to push a data:");
     scanf("%d",&n);
     
 }}
 void displayqueue(){
     struct node *temp;
     temp=head;
    if(temp==NULL)
     {
         printf("linked list is not present");
         
     }
    else
     {
        while(temp!=NULL)
        {
     
            printf("%d\n",temp->data);
            temp=temp->next;
        }  
     }
 }


void push()
{   
    struct node*temp,*new,*prev;
    new=createnode();
    new->next=NULL;
    printf("enter data to be added at the end :");
    scanf("%d",&new->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        
    }
    temp->next=new;
    
}

void pop(){
    struct node*temp;
    temp=head;
    temp=head->next;
    head->next=NULL;
    free(head);
    head=temp;
    
}


 
int main()
{int n,a=9;
createnode();
create_queue_using_list();
displayqueue();

while(a==9)
{printf("press \n 1.displayqueue \n2.push \n3.pop  ");
scanf("%d",&n);
    switch(n){
        case 1:
            displayqueue();
            break;
        
        
        case 2:
            push();
            break;
        
        case 3:
            pop();
            break;
}
    printf("enter 9 to do some other operations:");
    scanf("%d",&a);
}
return 0;
}

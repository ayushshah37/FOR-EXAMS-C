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

void createlist()
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
     printf("enter data in the node:");
     scanf("%d",&new->data);
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
     printf("enter 9 to add a new node:");
     scanf("%d",&n);
     
 }}
 void displaylist(){
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
void deletenode()
{   int value;
    struct node*temp,*search,*prev;
    temp=head;
    prev=NULL;
    printf("enter data to be searched :");
    scanf("%d",&value);
    //search->next=NULL;
    while(temp!=NULL)
    {
    if (temp->data==value)
    {   if(prev==NULL)
        {
            head=temp->next;
            temp->next=NULL;
            free(temp);
        }
        else
        {
            prev->next=temp->next;
            temp->next=NULL;
            free(temp);
        }
        
    }
    else
    {
        prev=temp;
        temp=temp->next;
    }
        
    }
}
void insertbeg()
{
    struct node *temp,*new;
    new=createnode();
    new->next=NULL;
    printf("enter the data to the node added in the beginning :");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
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
void insertbetween()
{   int value;
    struct node*temp,*new,*prev;
    new=createnode();
    prev=NULL;
    temp=head;
    //printf("enter position for the data to be added");
    printf("enter data for the new node to be added in between:");
    scanf("%d",&new->data);
    printf("enter the element from the linked list behind which you want to add you want your add your element:");
    scanf("%d",&value);
    while(temp!=NULL){
        
    
        if (value==temp->data)
        {
            new->next=temp->next;
            prev=temp;
            prev->next=new;
            temp=temp->next;
        }
        else
        {
            temp=temp->next;
        }
    
    
}}
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
createlist();
displaylist();

while(a==9)
{printf("enter 1-to display linked list node,2-to insert node in the beginning,3-to delete a node,4 to insert a node at the end,5 to insert node anywhere in between,6 to pop the node :");
scanf("%d",&n);
    switch(n){
        case 1:
            displaylist();
            break;
        case 2:
            insertbeg();
            break;
        case 3:
            deletenode();
            break;
        case 4:
            push();
            break;
        case 5:
            insertbetween();
            break;
        case 6:
            pop();
            break;
}
    printf("enter 9 to do some other operations:");
    scanf("%d",&a);
}
return 0;
}

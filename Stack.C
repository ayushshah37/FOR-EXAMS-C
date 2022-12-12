#include <stdio.h>
#include <stdio.h>
#define max 10
int top=-1;
int arr[100];
void push(){
    int value;
    printf("enter value to be added:");
    scanf("%d",&value);
    if(top==max-1){
        printf("stack is full");
    }
    else{
        top=top+1;
        arr[top]=value;
    }
}
void pop(){
    int temp;
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("popped element is %d",arr[top]);
        top=top-1;
    }
}
void display(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        for (int i=top;i>=0;i--){
            printf("%d",arr[i]);
            }
    }
}
int main(){
    int choice;
    do {
        printf("\n1.Push\n2.Pop\n3.Display");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
            break;
            case 2: pop();
            break;
            case 3:display();
            break;
            case 4:printf("Thank You");
        }
    }while(choice!=4);
    return 0;
}

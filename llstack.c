#include <stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *top = NULL;

void push();
void pop();
void display();

void main()

{
    int choice;
    while(1)
    {
        printf("\n enter your choice:");
        printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            case 4:exit(1);
            default:printf("\n invalid choice");
        }
    }
}

void push()
{
    int item;
    struct node *temp;
    temp  = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL)
    {
    printf("\n stack overflow");
    }
    else{
    printf("\n enter the element to be pushed : ");
    scanf("%d",&item);
    temp->info = item;
    temp->link=top;
    top = temp;
    }
}


void pop()
{
    struct node *temp;
    if(top == NULL){
        printf("\n stack underflow");
    }
    else
    {
        temp = top;
        printf("\n popped item is %d",temp->info);
        top = top->link;
        free(temp);
        
    }
}

void display(){
    struct node *ptr;
    ptr = top;
    if(top == NULL)
    {
        printf("\n empty stack");
       
    }
    else
    {
        printf("\nstack elements are :");
        while(ptr!=NULL)
        {
            printf("%d \n",ptr->info);
            ptr=ptr->link;
        }
    }
  
}

















































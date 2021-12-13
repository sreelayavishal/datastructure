# include<stdio.h>
# include<stdlib.h>
void create();
void display();
void insertbig();
void insertend();
void insertspeci();
void delfirst();
void delend();
void delspc();
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head,*tail,*new,*temp;
int val,ch,opt;
int main()
{
do{
printf("1:create a node\n2:display the list\n3:insert at beginninh\n 4:insert at end\n5:insert at specific position\n 6:delstart\n7:delete end\n8:delspec\n");
        printf("enter the choice:");
        scanf("%d",&ch);
    
    
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:display();
                   break;
            case 3:insertbig();
                   break;
            case 4:insertend();
                   break;    
            case 5:insertspeci();
                   break;    
            case 6:delfirst();
                   break;
            case 7:delend();
                   break;  
            case 8:delspc();
                   break;          
                                            
             default:
             printf("wrong choice");      
        }
        printf("do you want to continue 1/0:");
        scanf("%d",&opt);
    }while(opt==1);
}
void create()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else
    {
        tail->next=new;
        tail=new;
    }
}
void display()
{
    tail=head;
    while(tail!=0)
    {
        printf("%d\t",tail->data);
        tail=tail->next;
    }

}
void insertbig()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&val);
    new->data=val;
    new->next=head;
    head=new;
}
void insertend()
    {
     new=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&val);
        new->data=val;
        new->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
         temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
    }
void insertspeci()
{
    int pos,i;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&val);
    printf("enter the position:");
    scanf("%d",&pos);
    tail=head;
    for(i=0;i<pos-1;i++)
    {
        new->data=val;
        tail=tail->next;
        new->next=tail->next;
        tail->next=new;

    }


}
void delfirst()
{
    tail=head;
    head=head->next;
printf("the deleted element:%d",temp->data);
    free(tail);
}
void delend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        tail=temp;
        temp=temp->next;
    }
    tail->next=NULL;
  printf("the deleted element:%d",temp->data);
    free(temp);
}
void delspc()
{
int i,pos;
printf("enter the position:");
scanf("%d",&pos);
temp=head;
    for(i=0;i<pos-1;i++)
    {
     temp=temp->next;
    }
    temp->next=temp->next->next;
printf("the deleted element:%d",temp->data);
}

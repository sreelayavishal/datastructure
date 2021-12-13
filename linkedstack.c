# include<stdio.h>
    # include<stdlib.h>
    void push();
    void pop();
    void display();
   
    struct node
    {
        struct node *prev;
        int data;
        struct node *next;
    }*head,*tail,*new,*temp;
    int val,ch,opt;
    int main()
    {
        printf("1:display the list\n2:insert data\n3:delete data\n");
        do{
            printf("enter the choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:display();
                       break;
                case 2:push();
                       break;
                case 3:pop();
                       break;
                 
               
                                               
                 default:
                 printf("wrong choice");      
            }
            printf("do you want to continue 1/0:");
            scanf("%d",&opt);
        }while(opt==1);
    }
   
     
    void push()
    {
      new=(struct node*)malloc(sizeof(struct node));
      printf("enter the data");
      scanf("%d",&val);
      new->data=val;
      new->next=head;
      new->prev=NULL;
     head=new;
    }
     
    
    void display()
    {
      tail=head;
      while(tail!=NULL)
      {
       printf("%d\t",tail->data);
       tail=tail->next;
       }
    }
    
    
    void pop()
    {
     temp=head;
     head=head->next;
     printf("the element deleted %d:",temp->data);
     free(temp);
    }
    

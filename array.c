#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void insert();
int delete_element();
int peek();
void display();
int main()
{

int val,op;
do
{
printf("\n**main menu");

printf("enter the operation to performed\n");
printf("enter 1 to insert\n");
printf("enter 2 to delete_element\n");
printf("enter 3 to peek\n");
printf("enter 4 to display element\n");

scanf("%d",&op);
switch(op)
{
case 1:insert();
break;
case 2:
      val=delete_element();
      if(val!=-1)
       {
      printf("\n the number deleted in queue is :%d",val);
       }
break;
case 3:
       val=peek();
      if(val!=-1)
      {
      printf("\n the first value in queue is :%d",val);
      }
break; 
case 4:display();
break; 

default :printf("invalid program");          
}
}
while(op==1);


}


void insert()
{
int num;
printf("\n enter the number to be inserted in the queue:");
scanf("%d",&num);

if(rear==N-1)
{
printf("\n overflow");
}
else if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=num;
}

else
{
front=rear=0;
rear++;

queue[rear]=num;
}
}
int delete_element()
{

int val;
if(front==-1||front>rear)
{
printf("\n underflow");
return -1;
}
else
{
val=queue[front];
front++;
if(front>rear)
{
front=rear=-1;
}
return val;
}
}
int peek()
{
if(front==-1||front>rear)
{
printf("\n queue empty");
 return -1;
}
else
{
return queue[front];
}
}

void display()
{
int i;
printf("\n");
if(front==-1||front>rear)
{
printf("\n queue empty");
}
else
{
for(i=front;i<=rear;i++)
{
printf("\t %d",queue[i]);
}
}
}







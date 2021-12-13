#include <stdio.h>
#include <stdlib.h>
void preOrder();
void postOrder();
void inOrder();
struct node
{
        int data;
        struct node *left, *right;
};

 
  struct node *create()
 {      
        int item;
        struct node *newNode;
        newNode  = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data(insert 0 if no data to be inserted):\n");
        scanf("%d",&item);
        if(item==0)
        {
          return NULL;
        }
        newNode->data = item;
        printf("Enter the left child of the node%d\n", newNode->data);
        newNode->left=create();
        printf("Enter the right child of the node%d\n", newNode->data);
        newNode->right=create();
        return newNode;
  }


  void preOrder(struct node *t)
  {
        if (t)
        {
               
                preOrder(t->left);
                preOrder(t->right);
                printf("%d  ", t->data);
        }
       
  }

  void postOrder(struct node *t)
  {
        if (t)   
        {
                printf("%d  ", t->data);
                preOrder(t->left);
                preOrder(t->right);
        }
       
  }

  void inOrder(struct node *t)
  {
        if (t)
        {
               
                preOrder(t->left);
                printf("%d  ", t->data);
                preOrder(t->right);
        }
       
  }

  void main()
 {
       
struct node *root;
root=create();
printf("Preorder traversing:\n");
preOrder(root);
printf("\nPostorder traversing:\n");
postOrder(root);
printf("\ninorder traversing:\n");
inOrder(root);
}

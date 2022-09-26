#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
}*start=NULL,*q,*t;;

void insertfront();
void insertend();
void insertspecific();
void display();
void deletefirst();
void deleteend();
int deleteposition();
void search(struct node *start,int item);

typedef struct node DATA_NODE;

DATA_NODE *head_node, *first_node, *temp_node = 0, *prev_node, next_node;
int data;

int main() {
  int option = 0; int pos,item;
  
  while (option < 9) {
      
    printf("-------MENU DRIVEN LINKED LIST PROGRAM------");
    printf("\nOptions\n");
    printf("1 : Insert in begining \n");
    printf("2 : insert  at end \n");
    printf("3 : insert at a position\n");
    printf("4 : display Linked List\n");
    printf("5 : delete first element\n");
    printf("6 : delete element at last position\n");
    printf("7 : delete at a given position\n");
    printf("8 : search an element in list\n");
    printf("Others : Exit()\n");
    printf("Enter your option:");
    scanf("%d", &option);
    switch (option) {
      case 1:
        insertfront();
        break;
      case 2:
        insertend();
        break;
      case 3:
       insertspecific();
        break;
      case 4:
      display();
      break;
      case 5:
      deletefirst();
      break;
      case 6:
      
      deleteend();
      break;
      case 7:
      deleteposition();
      break;
      case 8:
     printf("Enter the element to be searched : ");
                        scanf("%d",&item);
                        search(start,item);
                        break;

      break;
      default:
        break;
    }
  }

  return 0;
}

void insertfront() {
  int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
 
    if(start==NULL)       
    {
        t->next=NULL;
        start=t;
    }
    else
    {
        t->next=start;
        start=t;
    }
}

void insertend() {
  int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
    t->next=NULL;
 
    if(start==NULL)       
    {
        start=t;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        q=q->next;
        q->next=t;
    }
}

void insertspecific() {
   int pos,i,num;
    if(start==NULL)
    {
        printf("List is empty!!");
    }
 
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    t->data=num;
 
    q=start;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            printf("There are less elements!!");
         
        }
 
        q=q->next;
    }
 
    t->next=q->next;
    q->next=t;
   
}

void display()
{
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=start;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
    }
}
void deletefirst()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        start=start->next;
        printf("Deleted element is %d",q->data);
        free(q);
    }
}
void deleteend()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        while(q->next->next!=NULL)
        q=q->next;
 
        t=q->next;
        q->next=NULL;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}
int deleteposition()
{
    int pos,i;
 
    if(start==NULL)
    {
        printf("List is empty!!");
        return 0;
    }
 
    printf("Enter position to delete:");
    scanf("%d",&pos);
 
    q=start;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            printf("There are less elements!!");
            return 0;
        }
        q=q->next;
    }
 
    t=q->next;
    q->next=t->next;
    printf("Deleted element is %d",t->data);
    free(t);
 
    return 0;
}

     void search(struct node *start,int item)
{
        struct node *q=start;
        int pos=1;
        while(q!=NULL)
        {
                if(q->data==item)
                {
                        printf("Item %d found at position %d\n",item,pos);
                        return;
                }
                q=q->next;
                pos++;
        }
        printf("Item %d not found in list\n",item);
}

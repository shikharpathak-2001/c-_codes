#include <stdio.h>
#include <stdlib.h>


struct node 
{ 
    int val; 
    struct node *left, *right; 
}; 
   

struct node* newNode(int item) 
{ 
    struct node* temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->val = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   

void preorder(struct node* root) 
{ 
    if (root != NULL) 
    { 
        printf("%d\t ", root->val); 
        preorder(root->left); 
        preorder(root->right);
    } 
}
void post_order_traversal(struct node* root) {
   if(root != NULL) {
      post_order_traversal(root->left);
      post_order_traversal(root->right);
      printf("%d\t ", root->val);
   }
}
void printInorder(struct node* root)
{
    if ( root != NULL)
     {   
 
    
    printInorder(root->left);
 
    
    printf("%d\t",root->val);
 
   
    printInorder(root->right);
     }
} 
   

struct node* insert(struct node* node, int val) 
{ 
    
    if (node == NULL) return newNode(val); 
  
   
    if (val < node->val) 
        node->left  = insert(node->left, val); 
    else if (val > node->val) 
        node->right = insert(node->right, val);    
  
  
    return node; 
} 
   
int main() 
{ 
    int choice;/* Our tree  is like
              128 
           /     \ 
          90     270 
         /  \    /  \ 
       70   160 240  81 */
    struct node* root = NULL; 
    root = insert(root, 128); 
    insert(root, 90); 
    insert(root, 70); 
    insert(root, 160); 
    insert(root, 270); 
    insert(root, 240); 
    insert(root, 81);
    
   
    while(1){
    printf("\nIn what manner you wish to traverse the tree ? ");
    printf("\n1:Preorder");
    printf("\n2:Inorder");
    printf("\n3:postorder");
    printf("\n4:end\n");
 
    scanf("%d",&choice); 
   switch (choice)
   {
   case 1:
       preorder(root);
       break;
   case 2:
   printInorder(root);
   break;
   case 3:
   post_order_traversal(root);
   case 4:
   exit(1);
   break;
   default:
   printf("wrong option selected try again");
       break;
   }
}
    return 0; 
}
#include<stdio.h>
#include <stdlib.h>

struct bst
{
    int value;
    struct bst *l;
    struct bst *r;
}*root=NULL,*temp=NULL,*t1,*t2;


void insert();
//void delete();
void inorderTraversal(struct bst *t);
void create();
void search();


void main()
{
    int ch;
    printf("\t\tBinary Search Tree\n\n");
    printf("Operations...\n");
    printf("\n1-Insert\n2-Delete\n3-Inorder Traversal\n4-Preorder Traversal\n5-Postorder Traversal\n6-Exit\n");
    while(1){
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                insert();
                break;
            case 2:
                //delete();
                break;
            case 3:
                inorderTraversal(root);
                break;
            case 4:
               // preorderTraversal();
                break;
            case 5:
                //postorderTraversal();
                break;
            case 6:
                exit(0);
            default:
                printf("\nEnter correct choice.\n");
        }
    }

}


 void insert(){
    create();
    if(root==NULL)
        root=temp;
    else
        search(root);
 }
 
 
 // to create node
 void create(){
     int data;
     printf("\nEnter the data to be inserted : ");
     scanf("%d",&data);
     temp= (struct bst *)malloc(1*sizeof(struct bst));
     temp->value = data;
     temp->l=temp->r=NULL;
 }
 
 
 void search(struct bst *t){
     if((temp->value>t->value) &&(t->r !=NULL))
        search(t->r);
     else if((temp->value > t->value)&&(t->r==NULL))
        t->r=temp;
    else if((temp->value < t->value)&&(t->l !=NULL))
        search(t->l);
    else if((temp->value < t->value)&& (t->l==NULL))
    t->l=temp;
 }
 
 //Recursive function to perform inorderTraversal of tree
 void inorderTraversal(struct bst *t){
     if(root==NULL){
        printf("\nNo Elements to display.\n");
        return;
     }
     if(t->l !=NULL)
        inorderTraversal(t->l);
    printf("%d->",t->value);
    if(t->r!=NULL)
        inorderTraversal(t->r);
        return;
 }
 

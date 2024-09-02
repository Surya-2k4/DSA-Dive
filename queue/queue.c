#include <stdio.h>
#include<conio.h>
void insert();
void delete();
void display();
void isEmptyOrNot();

int front=-1,rear=-1,choice=0;
void main()
{
    int size=0;
    printf("\t\tQueue using array\n\n");
    printf("Enter the size of the Queue :");
    scanf("%d",&size);
    int queue[size]; //declared queue and assigned the size
    while(choice!=5){
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.isEmptyOrNot\n5.Exit\n");
        printf("\nChoose one to perform : ");
        scanf("%d",&choice);
        while(choice!=5){
            switch(choice){
                case 1:{
                insert(queue);
                break;
                }
                case 2:{
                delete(queue,size);
                break;
                }
                case 3:{
                display(queue,size);
                break;
                }
                case 4:{
                isEmptyOrNot(queue,size);
                break;
                }
                case 5:{
                break;
                }
                default:
                printf("\nEnter correct choice.");
            }//end of switch
        } //end of inner while
    }//end of outer while
    getch();
}

void insert(int queue[],int size,int rear){
    int val=0;
    if(rear==size){ 
        printf("\nqueue full, cannot insert values.\n"); 
    }
    else{
    printf("\nEnter the value to be insert into the queue : ");
    scanf("%d",&val);
    rear++;
    queue[rear] = val;
    }    
}

void delete(int queue[],int front){
    if(front==-1){ 
        printf("\nNo values to delete.\n"); 
        
    }
    else{
        printf("%d deleted from the queue.\n",queue[rear]);
        front++;
    }
}

void display(int queue[],int size,int front){
    int i=0;
    if(rear>-1){
        for(i=front;i<=size;i++){
            printf("%d -> %d\n",i,queue[i]);
        }
    }
    else{ printf("\nNo values to display\n");}
    
}
void isEmptyOrNot(int size,int front,int rear){
    int res = size-rear;
    if(rear!=size){
         printf("\nQueue Not Empty. %d space available \n",res);
    }else{
         printf("\nQueue full.\n");
    }
}

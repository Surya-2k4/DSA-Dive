#include <stdio.h>
#include<conio.h>
int front=-1,rear=-1,choice=0;
void insert();
void delete();
void display();
void isEmptyOrNot();
void main()
{
    int size;
    printf("\t\t\033[1;31mQueue using array\033[1m\n\n\n");
    printf("Enter the size of the Queue :");
    scanf("%d",&size);
    int queue[size]; //declared queue and assigned the size
   
    while(choice!=5){
        printf("\n\033[1;33m1.Insertion\n2.Deletion\n3.Display\n4.isEmptyOrNot\n5.Exit\033[0m\n");
        printf("\n\033[1;32mChoose one to perform : \033[0m");
        scanf("%d",&choice);
            switch(choice){
                case 1:
                insert(queue,size);
                break;
                case 2:
                delete(queue,size);
                break;
                case 3:
                display(queue,size);
                break;
                case 4:
                isEmptyOrNot(size);
                break;
                case 5:
                printf("\nProgram Terminated\n");
                break;
                default:
                printf("\nEnter correct choice.\n\n");
            }//end of switch
    }//end of outer while
    getch();
}

void insert(int queue[],int size){
    int val;
    if(rear==size-1){
        printf("\nqueue full, cannot insert values.\n");
    }
    else{
    printf("\nEnter the value to be insert into the queue : ");
    scanf("%d",&val);
    rear++;
    queue[rear] = val;
    front=0;
    }    
}

void delete(int queue[],int size){
    if(front==size){
        printf("\nNo values to delete.\n");
    }
    else{
        printf("\n%d deleted from the queue.\n",queue[front]);
        front++;
        rear--;
    }
}

void display(int queue[],int size){
    int i;
    if(rear==-1){
        printf("\nNo values to display\n");
    }else{
        for(i=front;i<=rear;i++){
            printf("%d -> %d\n",i,queue[i]);
        }
    }
   
}
void isEmptyOrNot(int size){
    if(rear>-1){
         printf("\nQueue Not Empty\n");
    }else{
         printf("\nQueue Empty.\n");
    }
}

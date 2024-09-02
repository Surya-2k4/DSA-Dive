#include<stdio.h>

int top=-1,ch=0;
void push();
void pop();
void peep();
void isEmpty();
void isFull();

void main()
{
    printf("\tStack using Array\n\n");
    printf("Enter the size of stack : ");
    int size;
    scanf("%d",&size);
    int stack[size];
   
    while(ch!=6){
    printf("\n1.push()\n2.pop()\n3.peep()\n4.isEmpty()\n5.isFull()\n6.Exit");
    printf("\n\nChoose one to perform operation : ");
    scanf("%d",&ch);
   
    switch(ch){
        case 1:
        push(stack,size);
        break;
        case 2:
        pop(stack);
        break;
        case 3:
        peep(stack);
        break;
        case 4:
        isEmpty(stack,top,size);
        break;
        case 5:
        isFull(top,size);
        break;
        case 6:
        printf("Program terminated.");
        break;
        default:
        printf("Enter correct choice");
    }
       
    }
}

void push(int stack[],int size){
    if(top==size-1){
        printf("\nStack full, Cannot insert value.\n");
    }
    else{
        int val;
        printf("\nEnter the value to be inserted into stack :");
        scanf("%d",&val);
        top = top+1;
        stack[top] = val;
        printf("\n%d -> %d\n",top,stack[top]);
    }
}

void pop(int stack[]){
    if(top==-1){
        printf("\nStack Underflow, insert value and try pop\n");
    }
    else{
        printf("%d poped out from stack\n",stack[top]);
        top --;
       
    }
}
void peep(int stack[]){
    if(top==-1){
        printf("\nStack Underflow, Nothing to display\n");
    }
    else{
        printf("\nValues in the stack...\n");
        int i=0;
        for(i= top ; i>= 0 ; i--){
            printf("%d -> %d\n",i,stack[i]);
        }
    }
}
void isEmpty(int stack[],int top,int size){
    if(top == -1){
        printf("\nStack is Empty\n");
    }
    else if(top>-1){
        int t = (size-1)- top;
        printf("\n%d value can be insert\n",t);
    }    
}
void isFull(int top,int size){
    if(top == size-1){
        printf("\nStack is full, Pop the values to insert.\n");
    }
    else if(top ==-1){
        printf("\nStack Underflow, can able to insert %d values\n",size);
    }
   
}
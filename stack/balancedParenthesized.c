#include <stdio.h>
#include <string.h>
#define MAX 15

int isMatchingPair(char left, char right){
    return (left=='(' && right==')') || 
        (left=='{' && right=='}') || 
        (left=='[' && right==']');
}


int balancedParantheses(char expr[]){
    char stack[MAX];
    int top = -1;
    
    for(int i=0; i <strlen(expr); i++){
        char current = expr[i];
        
        if(current=='(' || current =='[' || current =='{' ){
            top++;
            stack[top] = current;
        }
        else if(current==')' || current==']' || current=='}'){
             // for checking the previous value (bracket)
            if(top == -1 || !isMatchingPair(stack[top--], current)) {
                return 0; // not balanced
            } 
        }
    }
    
    
}

void main(){
    char expr[MAX];
    
    printf("\t\tBalanced parentheses.\n\n");
    printf("Enter Expression : ");
    
    fgets(expr,MAX,stdin);
    
    if(balancedParantheses(expr)){
        printf("Properly Parenthesized.");
    }else{
        printf("Not Properly Parenthesized.");
    }
    
}

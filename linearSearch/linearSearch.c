
#include <stdio.h>
int linearSearch();


int linearSearch(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return 0;
}

void main()
{
    int i,val,size,target;
    printf("\t\tLinear Search\n\n");
    printf("Enter Size of an Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("\n\nEnter values separated by space : ");
    for(i=0; i< size;i++){
        scanf("%d",&val);
        arr[i]=val;
    }
    printf("\n\nEnter Target Value : ");
    scanf("%d",&target);

    if(linearSearch(arr,target,size)){
        printf("\nTarget %d present in the array",target);
    }else{
        printf("\nTaget %d not exist.",target);
    }

}
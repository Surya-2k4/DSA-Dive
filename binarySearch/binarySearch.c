#include <stdio.h>

void binarySearch();

void binarySearch(int arr[],int target,int size){





}


void main()
{
    printf("\t\tBinary search\n\n");
    printf("Enter the size for the Array : ");
    int size;
    scanf("%d",&size);
    printf("Enter the values separated by space : ");
    int arr[size],i,value,target;
    for(i = 0 ; i < size; i++){
        scanf("%d",&value);
        arr[i] = value;
    }
    printf("Enter target value : ");
    scanf("%d",&target);

    binarySearch(arr,target,size);
}

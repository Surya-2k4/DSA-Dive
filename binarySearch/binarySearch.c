#include <stdio.h>

int binarySearch();
void sort();

int binarySearch(int arr[],int target,int size){
    
    sort(arr,size);//sort the array for performing binarySearch
    
    int left=0, right=size - 1;  
    
    while(left <= right){
    int mid=left+(right-left)/2; // Avoid potential overflow
    
    if(target == mid){
        return mid;  // Target found at index mid
    }
    else if(arr[mid] < target){
        left = mid + 1;  // Search in the right half (left)
    }
    else{
        right = mid -1;  //  Search in the left half (left)
    }
    }
    return -1;  //target not found
}

//for performing the binarySearch need to sort the array
void sort(int arr[],int size){
    
    for(int i=0; i<size; i++){
          for(int j=0; j<size-i;j++){
              if(arr[j] > arr[j+1]){
                  // swapping arr[j] - > arr[j+1]
                  int temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
              }
          } 
    }
    // printf("\nAfter performing sort operation..");
    // for(int i=0;i<size;i++){
    //     printf("%d ",arr[i]);
    // }
}


void main()
{
    printf("\t\tBinary search\n\n");
    printf("Enter the size for the Array : ");
    int size;
    scanf("%d",&size);
    printf("\nEnter the values separated by space : ");
    int arr[size],i,value,target;
    for(i = 0 ; i < size; i++){
        scanf("%d",&value);
        arr[i] = value;
    }
    printf("\nEnter target value : ");
    scanf("%d",&target);
    
    int res = binarySearch(arr,target,size);
    
    
    if(res>-1){ printf("\n%d found at %d index.",target,res); }
    else{ printf("\n%d not found.",target); }
}

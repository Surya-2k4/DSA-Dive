#include <stdio.h>

int binarySearch();
void sort();

int binarySearch(int arr[],int target,int size){
    
    sort(arr,size);//sort the array for performing binarySearch
    
    int left=0, right=size - 1;  //declared left as starting point and right as end point of the array 
    
    while(left <= right){
    int mid=left+(right-left)/2; // Avoid potential overflow
    
    if(arr[mid] == target){
        return mid;  // Target found at index mid
    }
    else if(arr[mid] < target){
        left = mid + 1;  // Search in the right half (left)
    }
    else{
        right = mid -1;  //  Search in the left half (left)
    }
        
    }
     return -1; //target not found
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
    scanf("%d",&size);  // getting size for the array from the user
    printf("\nEnter the values separated by space : ");
    int arr[size],i,value,target;  //declaring the required variables for the programm
    for(i = 0 ; i < size; i++){
        scanf("%d",&value);        //get the values from the user
        arr[i] = value;            //assign it to the array
    }
    printf("\nEnter target value : ");
    scanf("%d",&target);   // getting the target value
    
    int res = binarySearch(arr,target,size);        // pass the array to the binarySearch function and store the result with the help of res variable
    
    
    if(res>-1){ printf("\n%d found at %d index.",target,res); }  //checking the res and print the result
    else{ printf("\n%d not found.",target); }
}

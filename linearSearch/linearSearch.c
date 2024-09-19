
#include <stdio.h>
int linearSearch();


int linearSearch(int arr[],int target,int size){
    for(int i=0;i<size;i++){        // traverse through till end
        if(arr[i] == target){        // checking if the value match to the target
            return i;              // if matched return the index value 
        }
    }
    return 0;  // if does'nt match return 0
}

void main()
{
    int i,val,size,target;   // initializing the required variables for the program
    printf("\t\tLinear Search\n\n");
    printf("Enter Size of an Array : ");
    scanf("%d",&size);  // getting size for array
    int arr[size];    /// declaring the array
    
    printf("\n\nEnter values separated by space : ");
    for(i=0; i< size;i++){
        scanf("%d",&val);   //getting values from the user
        arr[i]=val;         // assign the ip values in the array
    }
    printf("\n\nEnter Target Value : ");
    scanf("%d",&target);    // getting target value from the user

    /*int resIndex = linearSearch(arr,target,size)
        if(res==0)
        printf("not exist");
        else
        printf("Existed in %d index ", resIndex); 
    */
    
    if(linearSearch(arr,target,size)){   // calling linearSearch()  
        printf("\nTarget %d present in the array",target);    
    }else{
        printf("\nTaget %d not exist.",target);
    }

}

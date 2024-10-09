#include <stdio.h>
int is_Sorted(int arr[],int size){
    int decreasing=1;
    int increasing=1;

    for(int i=1;i<size;i++){
        if(arr[i]>arr[i-1]){
            decreasing=0;
        }
        if(arr[i]<arr[i-1]){
            increasing=0;
        }
    }
    return increasing || decreasing;
}
int main(){
    int arr1[]={4,6,8,10,12,20};
    int arr2[]={90,80,70,60,50,40};
    int arr3[]={20,10,60,5,7,11};

    
    if(is_Sorted(arr1,6)){
        printf("The Array is sorted");
    }else{
        printf("The array is not sorted");
    }
    
    if(is_Sorted(arr2,6)){
        printf("The Array is sorted");
    }else{
        printf("The array is not sorted");
    }
    
    if(is_Sorted(arr3,6)){
        printf("The Array is sorted");
    }else{
        printf("The array is not sorted");
    }

    return 0;
}
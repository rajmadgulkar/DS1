#include<stdio.h>
int LargestElement(int *arr,int size){
    int largest=arr[0];
    
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={3,2,1,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The largest element in an array is: %d",LargestElement(arr,size));


    return 0;
}
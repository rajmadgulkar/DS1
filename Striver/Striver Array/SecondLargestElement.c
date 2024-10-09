#include<stdio.h>
int SecondlargestElement(int *arr,int size){
    int largest=arr[0];
    int secondlargest=-1;

    for(int i=1;i<size;i++){

        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
    
}
int main(){
    int arr[]={1,2,4,7,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The second largest element in an array is: %d",SecondlargestElement(arr,size));


    return 0;
}
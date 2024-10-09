#include<stdio.h>
int Seclarge(int arr[],int n){
    
    int largest=-1;
    int SecondLargest=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>SecondLargest&&arr[i]!=largest){
            SecondLargest=arr[i];
        }
    }
    return SecondLargest;
}

int main(){
    int arr[]={1,2,3,4,8,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("%d ",Seclarge(arr,n));
    return 0;
}
#include<stdio.h>
int RightMax(int arr[],int n){

    int superior=0;
    int count=0;
    for(int i=n-1;i>=0;i--){

        if(arr[i]>superior){
            superior=arr[i];
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]={7,9,5,2,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("%d",RightMax(arr,n));
    return 0;
}
#include<stdio.h>
int SortGFG(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                int temp=min;
                min=arr[j];
                arr[j]=temp;
            }
        }
        arr[i]=min;
    }
}
int main(){
    int arr[]={0,2,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    SortGFG(arr,n);
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
// 0 0 1 2 2
#include<stdio.h>
void leftRotateone(int *arr,int size){
    int temp=arr[0];

    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    leftRotateone(arr,size);

    for(int j=0;j<size;j++){
        printf(" %d",arr[j]);
    }

    return 0;
}
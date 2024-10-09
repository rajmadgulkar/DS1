#include<stdio.h>
int countoccurence(int arr[],int n,int element){

    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,2,3,2,1,6,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("%d ",countoccurence(arr,n,1));
    return 0;
}
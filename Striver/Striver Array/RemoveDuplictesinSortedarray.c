#include<stdio.h>
int removeDuplicates(int *arr,int size){
    int i=0;
    for(int j=1;j<size;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    int arr[]={1,1,2,3,4,4,5,5,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The no of unique elements are %d",removeDuplicates(arr,size));

    return 0;
}
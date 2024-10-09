#include<stdio.h>
int LinearSearch(int *arr,int size,int element){
    
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,5,7,9,3,6,1,2,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=2;

    printf("The index of the 2 is %d.",LinearSearch(arr,size,element));


    return 0;
}
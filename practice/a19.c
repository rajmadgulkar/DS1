#include<stdio.h>
int MaxEle(int arr[],int size){

    int max=arr[0];
    
    for(int i=1;i<size;i++){

        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;


}
int main(){
    int arr[]={10,20,30,40,50,90,70,60,80};
    int size=sizeof(arr)/sizeof(arr[0]);

    int maxElement=MaxEle(arr,size);
    printf("%d",maxElement);

    return 0;


}

#include<stdio.h>
int isSorted(int *arr,int size){
    
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){
        }else{
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr[]={1,7,2,3,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr,size)){
        printf("The array is sorted\n");
    }else{
        printf("The array is not sorted\n");
    }

    return 0;
}
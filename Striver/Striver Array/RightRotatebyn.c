#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(int *arr,int left,int right){
    right =right-1;
    while(left<right){
        swap(&arr[left],&arr[right]);
        left++;
        right--;
    }  
}
void RightRotatebyn(int *arr,int size,int d){

    d=d%size;

    reverse(arr,0,size);
    reverse(arr,0,d);
    reverse(arr,d,size);
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int d=2;

    RightRotatebyn(arr,size,d);

    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }

    return 0;
}
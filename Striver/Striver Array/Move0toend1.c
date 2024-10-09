#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void Movezerotoend(int *arr,int size){
    int j=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<size;i++){
        if(arr[i]!=0){
            swap(&arr[i],&arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[]={1,0,3,2,3,2,0,0,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    Movezerotoend(arr,size);

    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
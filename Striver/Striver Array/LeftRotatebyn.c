//Brute Force
#include<stdio.h>
void leftRotatebyn(int *arr,int size,int d){
    int n=0;
    int main[size];
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int j=size-1-d;j<size;j++){
        main[n++]=arr[j];
    }

    for(int k=0;k<d;k++){
        main[n++]=temp[k];
    }

    for(int l=0;l<size;l++){
        printf(" %d",main[l]);
    }    

}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int d=3;

    leftRotatebyn(arr,size,d);


    return 0;
}
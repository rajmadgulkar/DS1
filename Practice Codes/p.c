//Optimize solution
#include<stdio.h>
#include<stdlib.h>

void DuplicatesArray(int arr[],int n){
    int found=0;

    for(int i=0;i<n;i++){
        int index=abs(arr[i]);

        if(arr[index]>=0){
            arr[index]=-arr[index];
        }else{
            printf(" %d",index);
            found=1;
        }
    }
    if(!found){
        printf("-1");
    }
    
}
int main(){
    int arr[]={2,3,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    DuplicatesArray(arr,n);
    return 0;

}
// 2 3
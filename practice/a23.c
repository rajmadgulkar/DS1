#include<stdio.h>
void Noduplicates(int arr[],int n){

    int i,j,k=0;


    for(i=0;i<n;i++){

        for(j=0;j<k;j++){

            if(arr[i]==arr[j]){
                break;
            }
        }
        if(j==k){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
        printf(" %d",arr[i]);
    }
}

int main(){
    int arr[]={1,2,3,2,1,6,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    Noduplicates(arr,n);



    return 0;


}
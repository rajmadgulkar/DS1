#include<stdio.h>
void ArrayLeaders(int arr[],int n){
    int itr=0;
    int ArrLeaders[n];
    ArrLeaders[itr]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>ArrLeaders[itr]){
            ArrLeaders[++itr]=arr[i];
        }
    }

    for(int i=0;i<=itr;i++){
        printf(" %d",ArrLeaders[i]);
    }

}
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    ArrayLeaders(arr,n);
    return 0;
}
// 2 5 17
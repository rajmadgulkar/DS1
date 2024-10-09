#include<stdio.h>
int MissEle(int arr[],int n){
    int InitialSum=0;
    int TotalSum=0;

    for(int i=0;i<n;i++){
        InitialSum+=arr[i];
    }

    TotalSum=(n+2)*(n+1)/2;

    return TotalSum-InitialSum;
}
int main(){
    int arr[]={1,2,3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int ele=MissEle(arr,n);
    printf("%d",ele);

    return 0;


}
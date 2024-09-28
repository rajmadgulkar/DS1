//Space Complexity solved
#include<stdio.h>
void ArrayLeaders(int arr[],int n){
    int maxfromRight=arr[n-1];
        printf(" %d",maxfromRight);

    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxfromRight){
            maxfromRight=arr[i];
            printf(" %d",maxfromRight);
        }
    }
}
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    ArrayLeaders(arr,n);
    return 0;
}
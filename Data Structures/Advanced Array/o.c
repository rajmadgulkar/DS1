//Kadane's Algorithm
#include<stdio.h>
int KadaneAlgo(int arr[],int size){
    int max=arr[0];
    int sum=0;

    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        if(sum<0) sum=0;

        if(sum>max) max=sum;
    }
    return max;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The max sum of subarray is:%d",KadaneAlgo(arr,size));

    return 0;
}
//The max sum of subarray is:6
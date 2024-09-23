#include<stdio.h>
int maxSum(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
                if(sum>max){
                    max=sum;
                }
            }
        }
    }
    return max;
}


int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The max sum of subarray is:%d",maxSum(arr,size));

    return 0;
}
//The max sum of subarray is:6
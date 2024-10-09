#include<stdio.h>
int sumofOddIntergers(int arr[],int size){
    int sum=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){ 
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[]={1,2,5,7,10,12,11};
    int size=sizeof(arr)/sizeof(arr[0]);

    int SumofOddintegers=sumofOddIntergers(arr,size);

    printf("The sum of odd integers is %d",SumofOddintegers);

    return 0;
}
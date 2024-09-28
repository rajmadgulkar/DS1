#include<stdio.h>
#include<math.h>
int perfectSquare(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        int squareNum=sqrt(arr[i]);
        if(squareNum*squareNum==arr[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]={64,16,38,81,50,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int plotCount=perfectSquare(arr,n);
    printf("The squared shaped plots are: %d",plotCount);
    return 0;
}
//The squared shaped plots are: 4
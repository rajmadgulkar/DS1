#include<stdio.h>
void maxEleInd(int arr[],int n){
    int maxEle=0;
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxEle){
            maxEle=arr[i];
            index=i;
        }
    }
    printf("%d  %d\n",maxEle,index);

}
int main(){
    int arr[]={23,45,82,71,65,42,11,92};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxEleInd(arr,n);
    return 0;
}
// 92  7
#include<stdio.h>
int main(){
    int arr[]={-7,2,4,9,-8,1,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    int rsum,lsum;
    int ans=-1;

    for(int i=0;i<size;i++){
        rsum+=arr[i];
    }

    for(int i=0;i<size;i++){
        rsum-=arr[i];
        if(lsum==rsum){
            ans=i;
            break;
        }
        lsum+=arr[i];
    }
    if(ans!=-1){
        printf("Found\n");
    }else{
        printf(" Not Found\n");
    }

    return 0;

}
//Found
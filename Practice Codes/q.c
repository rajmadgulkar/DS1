#include<stdio.h>
int DupArr(int arr[],int n){
    int ex[n];
    int ind=0;
    int found=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                int alreadyIn=0;
                for(int k=0;k<ind;k++){
                    if(ex[k]==arr[i]){
                        alreadyIn=1;
                        break;
                    }
                }
                if(!alreadyIn){
                    ex[ind++]=arr[i];
                    found=1;
                }
            }
        }
    }

    if(!found){
        printf("-1");
    }else{
        for(int i=0;i<ind;i++){
        printf(" %d",ex[i]);
        }
        

    }  

}
int main(){
    int arr[]={2,3,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    DupArr(arr,n);

    return 0;
}
// 2 3
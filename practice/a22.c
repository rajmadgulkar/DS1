#include<stdio.h>
int intersectionArr(int arr1[],int arr2[],int n1,int n2){
    int k=0;
    int intersection[n1+n2];

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){

            if(arr1[i]==arr2[j]){
                intersection[k]=arr1[i];
                k++;
            }

        }    
    }

    for(int i=0;i<3;i++){
        printf(" %d",intersection[i]);
    }


}

int main(){
    int arr1[]={1,2,3,4,6};
    int arr2[]={1,2,5,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    intersectionArr(arr1,arr2,n1,n2);

    return 0;


}
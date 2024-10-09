#include<stdio.h>
void Movezerotoend(int *arr,int size){

    int main[size];
    int j=0;
    
    for(int i=0;i<size;i++){
        
        if(arr[i]!=0){
            main[j++]=arr[i];
        }
    }
    for(int k=j;k<size;k++){
        main[k]=0;
    }
    for(int i=0;i<size;i++){
        printf(" %d",main[i]);
    }

}
int main(){
    int arr[]={1,0,3,2,3,2,0,0,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    Movezerotoend(arr,size);


    return 0;
}
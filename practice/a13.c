#include<stdio.h>
void mergeSorted_arrays(int *arr1,int *arr2,int *arr3,int size1, int size2,int size3){

    int itr1=0;
    int itr2=0;
    int itr3=0;

    while(itr3<=12){

        


        if(arr1[itr1]<arr2[itr2]){
            arr3[itr3]=arr1[itr1++];
        }else{
            arr3[itr3]=arr2[itr2++];
        }
        itr3++;
    }

    

}
void print_arr(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10,12,14};
    int arr3[12];

    printf("\n\nHere is the merged array:\n");
    mergeSorted_arrays(arr1,arr2,arr3,5,7,12);
    print_arr(arr3,12);





}
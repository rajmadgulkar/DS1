#include<stdio.h>
void Reverse_arr(int arr[],int size){
    
    for(int i=0;i<size/2;i++){
        swap(&arr[i],&arr[size-1-i]);
    }

}
void print_Arr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
}
void swap(int *first,int *second){
    int temp=*first;
    *first=*second;
    *second=temp;
}
int main(){
    int arr1[]={10,20,30,40,50,60,70,80,90};
    int arr2[]={10,20,30,40};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr1[0]);


    printf("\n\nThe original array is:\n");
    print_Arr(arr1,size1);
    printf("\n\nAfter swapping the array becomes:\n\n");
    Reverse_arr(arr1,size1);
    print_Arr(arr1,size1);

    printf("\n\nThe original array is:\n");
    print_Arr(arr2,size2);
    printf("\n\nAfter swapping the array becomes:\n\n");
    Reverse_arr(arr2,size2);
    print_Arr(arr2,size2);


    return 0;
}
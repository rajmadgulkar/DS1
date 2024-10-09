#include<stdio.h>
void delete(int arr[],int size, int new_arr[],int *new_size,int element){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=element){
            new_arr[j++]=arr[i];
        }
    }
    *new_size=j;
}
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("  %d",arr[i]);
    }
}
int main(){
    printf("Welcome to deleting elements in an array");
    int arr[8]={5,10,15,15,25,30,40,50};
    int new_arr[8];
    int new_size;

    delete(arr,8,new_arr,&new_size,25);
    printf("\n\nThe array after deleting an 25 is\n");
    print_arr(new_arr,new_size);

    delete(arr,8,new_arr,&new_size,8);
    printf("\n\nThe array after deleting an 8 is\n");
    print_arr(new_arr,new_size);

    delete(arr,8,new_arr,&new_size,15);
    printf("\n\nThe array after deleting an 15 is\n");
    print_arr(new_arr,new_size);

    return 0;
}
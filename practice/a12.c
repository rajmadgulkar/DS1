#include<stdio.h>
void pointer_cpy(char *arr,char *new_arr,int size ){
    for(int i=0;i<size;i++){
        *(new_arr+i)=*(arr+i);
    }
}
void print_arr(char *arr,int size){
    for(int i=0;i<size;i++){
        printf("%c",arr[i]);
    }
}
int main(){
    char arr[11]={'R','A','J',' ','P','R','O','G','R','A','M'};

    char new_arr[11];
    
    printf("\n\nThe original array is:\n");
    print_arr(arr,11);
    printf("\n\nThe new array is:\n");
    pointer_cpy(arr,new_arr,11);
    print_arr(new_arr,11);

    return 0;
}
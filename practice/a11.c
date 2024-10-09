#include<stdio.h>
int is_palindrome(int arr[],int size){
    for(int i=0;i<size/2;i++){
        if(arr[i]!=arr[size-1-i]){
            return 0;
        }
    }
    return 1;


}
int main(){
    int arr1[7]={1,2,3,4,3,2,1};
    int arr2[6]={1,1,1,1,1,1};
    int arr3[5]={1,1,1,1,2};

    if(is_palindrome(arr1,7)){
        printf("The array is a palindrome array");
    }else{
        printf("Not a palindrome");
    }


    if(is_palindrome(arr2,6)){
        printf("The array is a palindrome array");
    }else{
        printf("Not a palindrome");
    }


    if(is_palindrome(arr3,5)){
        printf("The array is a palindrome array");
    }else{
        printf("Not a palindrome");
    }



    return 0;
}
#include<stdio.h>

int strlength(char *str){
    int count=0;
    while(*str!='\0'){
        str++;
        count++;
    }
    return count;
}
int isPalindrome(char *str){

    int start=0;
    int end=(strlength(str)-1);

    while(end>start){
        if(str[start]!=str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main(){
    char str[10]="malayalam";

    if(isPalindrome(str)){
        printf("The str is palindrome\n");
    }else{
        printf("The str is not a palindrome\n");

    }


    return 0;

}
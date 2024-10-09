#include<stdio.h>
int main(){

    int str[100];
    printf("Enter the string :");
    fgets(str,sizeof(str),stdin);

    printf("The Entered string id %s",str);
    return 0;
}
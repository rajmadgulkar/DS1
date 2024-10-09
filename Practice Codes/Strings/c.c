#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];
    printf("Welcome to converting strings to Uppercase");
    printf("Please enter the string:");
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);

    }



    printf("Here is your final output: %s",str);
    return 0;
}
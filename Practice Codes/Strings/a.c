#include<stdio.h>
int main(){
    char name[25];
    printf("Welcome\n");
    printf("Please enter your name:");
    fgets(name,sizeof(name),stdin);

    printf("The name you entered is:");
    puts(name);
    return 0;
}
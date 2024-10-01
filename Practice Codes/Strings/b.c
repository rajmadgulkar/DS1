#include<stdio.h>
int main(){
    char day[10];
    char month[15];
    int year;

    printf("Welcome to formatting date\n");
    printf("Please enter the current day:");
    scanf("%s",day);
    printf("Enter the current month:");
    scanf("%s",month);
    printf("Finally, Enter the current year:");
    scanf("%d",&year);

    printf("\n");
    printf("The current date is %s %s %d",day,month,year);
    return 0;
}
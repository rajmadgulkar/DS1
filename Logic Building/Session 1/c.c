#include<stdio.h>
void main(){
    int rows;
    printf("Rows:");
    scanf("%d",&rows);
    for (int i=1; i<=rows;i++){
        for(int j=1; j<=rows;j++){
            printf(" *");
        }
        printf("\n");
    }
}
/*
Rows:3
 * * *
 * * *
 * * *
 */
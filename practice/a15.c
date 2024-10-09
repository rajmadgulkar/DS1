#include<stdio.h>
int main(){
    int n=100;

    while(n>10){
        
        if(n%2==0){
            n=((n-2)/2);
        }else{
            n=n/2;
        }
    }

    printf("%d ",n);
}
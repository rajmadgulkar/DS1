#include<stdio.h>
void DecitoBin(int num){
    int binArr[32];

    int i=0;

    while(num>0){
        binArr[i]=num%2;
        num=num/2;
        i++;
    
    }
    for(int j=i-1;j>=0;j--){
        printf(" %d",binArr[j]);
    }
}
int main(){
    int num=17;
    DecitoBin(num);
    return 0;
}
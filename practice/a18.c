#include<stdio.h>
char *revString(char *str){
    char *start = str;
    char *end=str;
    
    while(*end!='\0'){
        end++;
    }
    end--;

    char x;
    while(start<end){
        x=*start;
        *start=*end;
        *end=x;

        end--;
        start++;
    }
    return str;


}

int main(){
    char str[10]="Kanha";
    revString(str);

    printf("%s",str);

    return 0;

}

//1 Accenture

#include<stdio.h>
#include<string.h>
int indexofSubstring(char *str,char *s){
    int lenstr=strlen(str);
    int sublen=strlen(s);
    int l=strlen(s);
    for(int i=0;i<=lenstr-sublen;i++){
        int j;
        for(j=0;j<sublen;j++){
            if(str[i+j]!=s[j]){
                break;
            }
        }
        if(j==sublen){
            return 1;
        }
    }
    return -1;
}
int main(){
    char str[]="kalilinux";
    char s[]="ili";

    int sa=indexofSubstring(str,s);
    printf(" %d",sa);

    return 0;
}
#include<stdio.h>
int main(){
char str[]={'H','E','L','L','o'};
int i=0,vowel=0;
for(i=0;str[i]!='\0';i++)
        if(str[i]>='A'&& str[i]<='Z')
            str[i]=str[i]+'a'-'A';
        else if(str[i]>='a'&& str[i]<='z')
            str[i]=str[i]-32;

printf("%s",str);
}

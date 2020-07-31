#include<stdio.h>


int countWords(char str[]){
    int i, c=1;
//char str[100];
//gets(str);
//puts(str);
for(i=0;str[i]!='\0';i++)
    if(str[i]==' ')
        c++;
return(c);
}

int main(){
//char
printf("%d",countWords("Hello World MIT"));
}

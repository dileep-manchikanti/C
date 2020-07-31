#include<stdio.h>
int main(){
int i, c=1;
char str[100];
gets(str);
puts(str);
for(i=0;str[i]!='\0';i++)
    if(str[i]==' ')
        c++;
printf("No of Words:%d",c);
}


//Ouput:3

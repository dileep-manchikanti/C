#include<stdio.h>
int main(){
char str[100]="Hello World";
int i=0; char *p;
p=str;
while(*p!='\0'){
    i++;
    p=2000;
}
printf("%s: %d",str,i);
}

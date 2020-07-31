#include<stdio.h>
int main(){
int a=5,b=10;
int *p1=&a,*p2;
p2=&b;
printf("Value at %d is %d",p1,*p1);
printf("\nValue at %d is %d",p1-1,*(p1-1));
}

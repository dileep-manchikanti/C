#include<stdio.h>
int main(){
int *temp;
int a,b;
scanf("%d%d",&a,&b);
int *p,*q;
p=&a;q=&b;
printf("Before Swap: a=%d b=%d\n",a,b);
printf("Address: a=%x b=%x\n",&a,&b);
printf("Before Swap: a=%d b=%d\n",*p,*q);
//Swap
temp=p; p=q; q=temp;

printf("After Swap: a=%d b=%d\n",a,b);
printf("Address: a=%x b=%x\n",&a,&b);
printf("Address: a=%d b=%d\n",*p,*q);
}

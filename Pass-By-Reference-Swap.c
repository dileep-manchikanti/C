#include<stdio.h>
void swap(int p, int q){
int temp=p; p=q; q=temp;
}
void swap1(int *p, int *q){
int temp=*p; *p=*q; *q=temp;
}

int main(){
int a=10, b=20;
printf("Before a=%d b=%d\n",a,b);
swap(a,b);
printf("After a=%d b=%d\n",a,b);
swap1(&a,&b);
printf("After a=%d b=%d\n",a,b);
}


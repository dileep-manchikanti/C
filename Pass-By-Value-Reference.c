#include<stdio.h>
void sum_diff(int *p, int *q, int *r, int *s){
 *r=*p+*q;
 *s=*p-*q;
}


int main(){
int a=10,b=20,c,d;
sum_diff(&a,&b,&c,&d);
printf("%d %d",c,d);
}

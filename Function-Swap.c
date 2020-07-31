#include<stdio.h>


int main(){
int a=10,b=20;
swap1(a,b);
printf("Main: a=%d\tb=%d\n",a,b);
}

int swap1(int m, int n){
int temp;
temp=m; m=n; n=temp;
printf("Swap1: m=%d\tn=%d\n",m,n);
}

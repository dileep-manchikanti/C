#include<stdio.h>

int fib(int n){
    int a=0, b=1, c=1,i;
    printf("0 1 ");
    for(i=2;i<n;i++){
        printf("%d ",c);
        a=b; b=c;
        c=a+b;
    }
return c;
}
int main(){
    printf("%d",fib(100));
}


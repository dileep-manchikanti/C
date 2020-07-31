#include<stdio.h>
int main(){
int n=145,fact,l_d,sum=0,i,cpy;
cpy=n;

//Extract digits
while(n>0){
    l_d=n%10;
    n=n/10;
    for(fact=1,i=1;i<=l_d;i++)
        fact*=i;
    sum+=fact;
}
printf("%d",sum);
if(cpy==sum)
    printf("Strong Number");
}


#include<stdio.h>
main(){
int n,i,isPrime=1;
n=49;
i=2;
while(1){
    if(n%i==0){
        isPrime=0;
    }
    i++;

}
if(isPrime==1)
    printf("Prime");
else
    printf("Not Prime");


}

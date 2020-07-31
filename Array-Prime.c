#include<stdio.h>
int main(){
int A[]={7,11,13,15,19};
int n=5,isPrime=1,i,j;
for(i=0;i<n;i++,isPrime=1){
    //To check if A[i]
    for(j=2;j<A[i];j++)
        if(A[i]%j==0)
            isPrime=0;
    if(isPrime)
        printf("%d ",A[i]);
}
}

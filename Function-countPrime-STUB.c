#include<stdio.h>
int isPrime(int num){
    int i;
    for(i=2;i<num;i++)
        if(num%i==0)
            return 0;
    return 1;
}

int countPrime(int A[][3],int m, int n){
int i,j,ct=0;
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        if(isPrime(A[i][j]))
            ct++;
return ct;
}
main(){
int B[3][3]={3,9,12,
            17,21,23}, m=2,n=3;
printf("%d",countPrime(B,m,n));
}


#include<stdio.h>
int main(){
int A[10]={5,10,15,20,25},n,i,j,B[10];
n=5;

for(i=0;i<n;i++)
    B[n-1-i]=A[i];

for(j=0;j<n;j++)
    printf("%d ",B[j]);

}

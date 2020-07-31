#include<stdio.h>
int main(){
int A[10]={5,10,15,20,25},n,i,j,B[10],temp;
int value=99,pos=4;
n=5;

for(i=n-1;i>=pos-1;i--)
        A[i+1]=A[i];

A[pos-1]=value;
n=n+1;

for(i=0;i<n;i++)
    printf("%d ",A[i]);

}

#include<stdio.h>
void rSort(int A[],int n){
int i,temp;
if(n==1)
    return;
for(i=0;i<n-1;i++)
    if(A[i]>A[i+1]){
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }

rSort(A,n-1);
}
int main(){
int A[]={5,15,0,2},n=4,i;
rSort(A,n);
for(i=0;i<n;i++)
    printf("%d ",A[i]);
}

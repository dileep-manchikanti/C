#include<stdio.h>
int main(){
int A[10]={5,10,15,20,25},n,i,j,B[10],temp;
n=5;
for(i=0;i<n/2;i++){
    temp=A[i];
    A[i]=A[n-1-i];
    A[n-1-i]=temp;
    printf("%d %d\n",A[i],A[n-1-i]);
    getch();
}
for(i=0;i<n;i++)
    printf("%d ",A[i]);

}

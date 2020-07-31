#include<stdio.h>
int main(){
int i,j;
int A[5][3]={0},isIdentical=1;
int n=3;

for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
        //Diagonal Element
        if(i==j)
            //Looking for 1's, if not set NOT IDENTICAL
           if(A[i][j]!=1)
                isIdentical=0;
        //Non- Diogonal Element
        if(i!=j)
            //Looking for 0's, if not set NOT IDENTICAL
           if(A[i][j]!=0)
                isIdentical=0;
        }

if(isIdentical)
    printf("Identical");
else
    printf("Wow");



}

#include<stdio.h>
#include<stdio.h>
int main(){
int i,j;
int A[5][3]={0},sum[6]={0};
int n=3;

for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d\t",A[i][j]);
        sum[j]+=A[i][j];
    }
    printf("\n");
}
for(i=0;i<n;i++)
    printf("%d\t",sum[i]);
}

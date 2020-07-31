#include<stdio.h>
int main(){
int A[3][3]={1,2,3,4,5,6,7,10,9};
int (*p)[3];
p=A;
printf("%d",*(*(p+2)+1));
printf("\n%d",A[2][1]);
printf("\n%d",*(*(A+2)+1));
}

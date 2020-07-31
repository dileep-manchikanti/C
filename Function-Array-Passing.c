#include<stdio.h>

void second(int C[]){
C[1]=0;
}
void first(int B[]){
    B[0]=0;
    second(B);
}

int main(){
int A[]={5,10,15,20,25};
printf("Before %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4]);
first(A);
printf("After %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4]);
}

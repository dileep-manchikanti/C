#include<stdio.h>
int main(){
int A[]={-7,-11,-21,-13,-15};
int n=5,largest=0,i;
largest=A[0];
for(i=0;i<n;i++)
        if(A[i]>largest)
            largest=A[i];
printf("%d",largest);

}

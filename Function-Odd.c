#include<stdio.h>
int isOdd(int n){
if(n%2==0)
    return 0;
return 1;
}
int main(){
int i,k=10,n,counter=0;
//int A[]={1,2,3,4,5,6,7,8,9,10};

for(i=0;i<k;i++){
    scanf("%d",&n);
    counter+=isOdd(n);
}
printf("No of Odd# is %d",counter);
}

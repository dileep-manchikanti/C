#include<stdio.h>
int main(){
int n,arm=0,l_d,cpy;
scanf("%d",&n);
cpy=n;
while(n>0){
    //Extracting last digit
    l_d=n%10;
    //whitling down n
    n=n/10;
    arm=arm+l_d*l_d*l_d;
}
if(arm==cpy)
    printf("Armstrong");

}

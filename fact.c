#include<stdio.h>
int main(){
int n;
char ch;
do{
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
    printf("Do you want to continue (y/n)?");
    fflush(stdin);
    scanf("%c",&ch);
}while(ch=='y');

}

#include<stdio.h>
int main()
{
    int N,rem;
    scanf("%d",&N);
    rem=N%2;
    if(rem==0)
    {
        printf("%d is Even",N);
        printf("the remainder was zero");
    }

    else
    {
        printf("Odd");

    }
    printf("\nBye Bye..");
}

#include<stdio.h>
int main()
{
    int n=1,i=1;
    while(i<5){
    while(n<10){
    printf("%d %d\n",i,n);
    getch();
    break;
    n++;

    }
    printf("End of First Loop");
    i++;
    }
    printf("End of second Loop");

}

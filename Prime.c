#include<stdio.h>
main()
{
    int n,i,flag,l_l,u_l;
    printf("Enter the range:");
    scanf("%d%d",&l_l,&u_l);
    n=l_l;
    while(n<=u_l){
    i=2;flag=0;
    while(i<n){

        if((n%i)==0){
            flag=1;
        }
        printf("n=%d i=%d flag=%d\n",n,i,flag);
        //getch();
        i=i+1;
    }
    if(flag==1)
        printf("%d is Not prime\n",n);
    else
        printf("%d is Prime\n",n);
    n++;
    }
}




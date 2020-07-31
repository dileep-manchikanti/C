#include<stdio.h>
int main()
{
   int n=0;
   while(n<10){
   getch();
   n++;
   if(n==5)
     continue;
   printf("%d",n);
   printf("Hi\n");

   }

}

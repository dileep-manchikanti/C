#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float D,R;

    //scanf
    a=1;b=4;c=1;
    D=b*b-4*a*c;
    printf("%f",D);

    switch(D==0){
        case  1:
            R=-b/(2*a);
            printf("Roots are real & Equal %f",R);
        case 0:

    }



}

#include<stdio.h>

int isArmstrong(){
    static int n=1;
    printf("%d ",n);
    n++;
}

main(){
    isArmstrong();
    isArmstrong();
    isArmstrong();

}


#include<stdio.h>
int main(){
int n=3;
int i,j;
for(j=1;j<=10;j++){
    for(i=1;i<=n;i++) printf("%d*%d=%d\t",j,i,j*i);
    printf("\n");
}

}



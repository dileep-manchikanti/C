#include<stdio.h>
int main(){
int n=5,i,j,k=1;
for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        printf("%d\t",k++);
        getch();
    }
    printf("\n");

}


}


/*
n=3
1
2 3
4 5 6
*/

#include<stdio.h>
int main(){
char temp[20],name[10][20]={"Bob","Bill","Dave","Carl"};
int i,j,n=4;
for(i=0;i<n;i++)
    scanf("%s\n",name[i]);
//Sort
for(j=0;j<n-1;j++)
    for(i=0;i<n-j-1;i++)
//Comparison
    if(strcmp(name[i],name[i+1])>0){
        strcpy(temp,name[i]);
        strcpy(name[i],name[i+1]);
        strcpy(name[i+1],temp);
    }

for(i=0;i<n;i++)
    printf("%s\n",name[i]);

}

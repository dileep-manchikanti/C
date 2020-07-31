#include<stdio.h>
int main(){
char str[]="Hello World MIT";
char str1[]="MIT";
int isFound=0,i,j;

//Traverse the main string
for(i=0;str[i]!='\0';i++){
    if(str[i]==str1[0])
        for(isFound=1,j=0;str1[j]!='\0';j++)
            if(str1[j]!=str[i+j]){
                isFound=0;
                break;
        }
    if(isFound){
        printf("Found at %d",i+1);
        break;
    }
}
}





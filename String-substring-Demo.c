#include<stdio.h>
int main()
{
    char str[100]="abcabcaabc", srcstr[20]="aabc";
    int i,j,k;
    int isFound=0;
    //traverse str
    for(i=0;str[i]!='\0';i++)
        //Look for First Hit
        if(str[i]==srcstr[0]){
            isFound=1;
            k=i+1;
            //traverse srcstr
            for(j=1;srcstr[j]!='\0';j++,k++)
                //Looking for a Mismatch
                if(srcstr[j]!=str[k]){
                    isFound=0;
                    break;
                }
            if(isFound)
                printf("Found at %d",i+1);
        }
}


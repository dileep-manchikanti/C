#include<stdio.h>
int main(){
char str[]={'H','e','l','l'};
int i=0,vowel=0;
for(i=0;str[i]!='\0';i++){
    if(str[i]=='e')
        vowel++;

}


printf("Vowel: %d",vowel);
}

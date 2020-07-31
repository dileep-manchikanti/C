#include<stdio.h>
int main(){
char *name[3] = { 	"New Zealand",
					"Australia",
					"India"};
printf("%c",*(name[2]+1));
getch();

}

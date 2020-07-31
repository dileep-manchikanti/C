#include<stdio.h>
#include<math.h>

void first(){
printf("In first");
getch();
}
void second(){
printf("In Second");
getch();
first();
printf("In Second again!");
getch();

}

int main(){
printf ("In main");
getch();
second();
printf ("In main again!");
getch();
}


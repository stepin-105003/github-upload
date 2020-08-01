#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
main(){

int i=10;
char x='A';
float b=2.5;
void * gp;
gp=&x;
gp=&i;
gp=&b;
printf("%f",*(float *)gp);

}

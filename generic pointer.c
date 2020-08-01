#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
main()
{
int i;
char *word[3];
void * gp;
word[0]="one";
word[1]="two";
word[2]="three";
for(i=0;i<3;i++)
{
    printf(" word is %s \n",word[i]);
}

gp= word;
for(i=0;i<3;i++)
{
    printf("%s \n",(*(char **)gp));
    gp= (char **)gp +1;
}

}


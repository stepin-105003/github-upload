#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
main()
{
char *s;
int i;
i=sizeof("hello");
s=(char*) malloc(i);
strncpy(s,"hello world",i);
printf("string was %s \n",s);

//realloc(s,12);
//strncpy(s,"hello",i);
strcat(s," world");
printf("string is %s \n",s);

free(s);
}

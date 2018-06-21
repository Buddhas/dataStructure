#include<stdio.h> 
#include <stdlib.h>
#include<string.h> 
int main()
{ char *p, *q, *r;
p=q=r=(char *)malloc(sizeof(char)*20);
strcpy(p,"attaboy,welcome!");
printf("%c%c%c\n",p[11], q[3], r[4]);
free(p);
return 0;
}

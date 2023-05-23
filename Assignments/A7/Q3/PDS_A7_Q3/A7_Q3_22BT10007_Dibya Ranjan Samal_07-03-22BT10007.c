#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n;
 char *g,*k;
 scanf("%d",&n);
 g=(char*)malloc(n*sizeof(char));
 k=(char*)malloc(n*sizeof(char));
 for(int i=0;i<n;i++)
 {
     scanf("%s",&g[i]);
 }
 printf("%s",g);




return 0;
}

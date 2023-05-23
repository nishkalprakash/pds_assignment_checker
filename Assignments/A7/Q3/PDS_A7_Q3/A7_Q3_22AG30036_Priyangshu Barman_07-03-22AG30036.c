#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    scanf("%d", &n);
    char *x,*y;
    x = (char*)malloc(n*sizeof(char));
    y = (char*)malloc(n*sizeof(char));
    for(k = 0;k < n;k++)
    {
        scanf("%s", &x[k]);
    }
  return 0;
}

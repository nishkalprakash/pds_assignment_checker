#include<stdio.h>
#include<stdlib.h>

int main()
{
    int**m;
    int**n;
    int**o;
    int p,q,r,i,j;
    int*arr;

    printf("enter p,q,r \n");
    scanf("%d%d%d",&p,&q,&r);
    arr=(int**)calloc(q,sizeof(int*));
    for(i=0;i<q;i++)
        arr[i]=(int*)calloc(p,sizeof(int));
    for (i=0;i<p;i++)
      {
        for (j=0;j<q;j++)

          {
              scanf ("%f",&arr[i][j]);
          }
      }


return 0;

}

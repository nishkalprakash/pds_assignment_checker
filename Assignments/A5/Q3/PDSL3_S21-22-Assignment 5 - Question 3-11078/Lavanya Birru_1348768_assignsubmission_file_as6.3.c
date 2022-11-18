/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int *saddle(int **arr,int *p,int r,int c){ int i,j,k,n,sp,min,m,a[2*r];p=a;
for ( i = 0; i < r; i++)
{
   n=0;
   sp=0;
   for (j = 0; j < c; j++)
   {
     if (sp<arr[i][j])
     {
       sp=arr[i][j];
       n=j;
       min=0;
       for (k = 0; k < r; k++)
       {
          if (min>arr[k][n])
          {
            min=arr[k][n];
            m=k; /* code */
          }

       }
       if (sp==min)
       {
          *p++=m;
         *p++=n;
         /* code */
       }


     }

   }

}
return p
}
int main()
{ int r,c,**arr,i,j,*p;
    printf("enter row and column size");
    scanf("%d %d",&r,&c);
    arr=(int**)malloc(sizeof(int*)*r);
    printf("enter the input matrix");
    for ( i = 0; i < r; i++)
    {
      arr[i]=(int*)malloc(sizeof(int)*c);
      for (j = 0; j < c; j++)
      {
         scanf("%d",&arr[i][j]) ;/* code */
      }
        /* code */
    }
  p=saddle(arr,p,r,c);
 printf("the saddle points are");
 for ( i = 0; i < 2*r; i++)
 {
    printf(arr[*p++][*p++]); /* code */
 }

return(0);
}

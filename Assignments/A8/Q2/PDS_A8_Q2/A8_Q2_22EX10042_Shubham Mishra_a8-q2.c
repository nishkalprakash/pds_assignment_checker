#include<stdio.h>
#include<stdlib.h>

typedef struct array{
    int** ptr;
    int m;
    int n;
} matrix;
void multiplication(matrix a,matrix b)
{
   int c[a.m][b.n];
    for(int i=0;i<a.m;i++)
    {
        for(int k=0;k<b.n;k++)
        {

        c[i][k]=0;
        for(int j=0;j<b.m;j++)
        {
            c[i][k]+=(a.ptr[i][j]*b.ptr[j][i]);
        }
        }
    }
      printf("resultant matrix is \n");
   for(int i=0;i<a.m;i++)
   {
       for(int j=0;j<b.n;j++)
       {
           printf("%d ",c[i][j]);
       }
       printf("\n");

   }

}
int main(){
   matrix a,b;

   printf("enter the no of rows of a\n ");
   scanf("%d",&a.m);
   printf("enter the no of cols of a\n ");
   scanf("%d",&a.n);
   printf("enter the no of rows of b\n ");
   scanf("%d",&b.m);
   printf("enter the no of cols of b\n ");
   scanf("%d",&b.n);
   a.ptr=(int **)malloc(a.m*sizeof(int*));
   for(int i=0;i<a.m;i++)
   {
       a.ptr[i]=(int*)malloc(a.n*sizeof(int));

   }
   b.ptr=(int **)malloc(b.m*sizeof(int*));
   for(int i=0;i<b.m;i++)
   {
       b.ptr[i]=(int*)malloc(b.n*sizeof(int));

   }
   printf("enter the values of a");
   for(int i=0;i<a.m;i++)
   {
       for(int j=0;j<a.n;j++)
       {
           scanf("%d",&a.ptr[i][j]);
       }
       printf("\n");

   }
    printf("enter the values of b");
   for(int i=0;i<b.m;i++)
   {
       for(int j=0;j<b.n;j++)
       {
           scanf("%d",&b.ptr[i][j]);
       }
       printf("\n");

   }
   printf("matrix a is\n");
   for(int i=0;i<a.m;i++)
   {
       for(int j=0;j<a.n;j++)
       {
           printf("%d " ,a.ptr[i][j]);
       }
       printf("\n");

   }
     printf("matrix b is\n");
   for(int i=0;i<b.m;i++)
   {
       for(int j=0;j<b.n;j++)
       {
           printf("%d " ,b.ptr[i][j]);
       }
       printf("\n");

   }
   if(a.n==b.m)
   {
       printf("matrix a after multiplication is\n");
   for(int i=0;i<a.m;i++)
   {
       for(int j=0;j<a.n;j++)
       {
           printf("%d " ,a.ptr[i][j]);
       }
       printf("\n");

   }
     printf("matrix b after multiplication is\n");
   for(int i=0;i<b.m;i++)
   {
       for(int j=0;j<b.n;j++)
       {
           printf("%d " ,b.ptr[i][j]);
       }
       printf("\n");

   }
     multiplication(a,b);
   }
   else{
    printf("invalid multiplication");
   }




}

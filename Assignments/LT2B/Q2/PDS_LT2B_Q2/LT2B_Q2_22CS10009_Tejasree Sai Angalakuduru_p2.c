/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no :labtest 2
 *Description   : strings
 */

#include<stdio.h>
#include<stdlib.h>

int main ()
{
  
  int m,n,i,j;
printf("Enter the value of m :\n" );
 scanf("%d",&m);
printf("Enter the value of n :\n" );
 scanf("%d",&n);
 /*r=read(m,n);
 for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",r[i][j]);
    }
   printf("\n");
   
  }*/
 read(m,n);
return 0;
}

void read(int m, int n)
{
  int*r;
int i;
 //r=(int*)malloc(n*sizeof (int));
if(m<0)
 return;
else
{
  read(m-1,n);
  r=(int*)malloc(n*sizeof (int));
 for(i=0;i<n;i++)
  {
    scanf("%d",&r[i]);
printf("%d\t",r[i]);
}
printf("\n");
}
}
    

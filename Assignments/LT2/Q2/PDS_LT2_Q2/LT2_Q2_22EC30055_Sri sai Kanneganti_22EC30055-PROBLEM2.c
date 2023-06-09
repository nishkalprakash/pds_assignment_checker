/* name K SRISAI
Roll No 22EC30055
PROBLEM 2*/

#include<stdio.h>
#include<stdlib.h>
typedef struct
{
 char roll[11] ;
 char dep[3];
  struct
  {
      int d;
      int mm;
      int y;
  }dob ;
} record ;
int main()
{
  int n,m=0;
  scanf("%d",&n);
  if(n>100)
  {
      printf("Invalid value of n");
      return 0 ;
  }
  record *a ;
  a=(record*)malloc(n*sizeof(record));
  for(int i=0;i<n;i++)
  {
      scanf("%s",a[i].roll);
      scanf("%s",a[i].dep);
     scanf("%d/%d/%d",&a[i].dob.d,&a[i].dob.mm,&a[i].dob.y);
       }
       int year ;
       scanf("%d",&year);
       int i=0;
       for(int r=0;r<n;r++)
        {


          if(a[i].dob.y<year)
          {
              printf("\n deleated records: %s %s %d/%d/%d",a[i].roll,a[i].dep,a[i].dob.d,a[i].dob.mm,a[i].dob.y);
              m++ ;
              for(int j=i+1;j<n;j++)
              {
                  record e;
                  e=a[j-1];
                  a[j-1]=a[j];
                  a[j]=e ;
              }
            i-- ;
          }
          i++ ;
        }


        a=realloc(a,(n-m)*sizeof(record));
        printf("\n m = %d, n - m = %d",m,n-m);
        printf("\n remaining records:");
        for(int i=0;i<(n-m);i++)
        {
            printf("\n %s %s %d/%d/%d",a[i].roll,a[i].dep,a[i].dob.d,a[i].dob.mm,a[i].dob.y);
        } else {
         if(n==m){
            printf("\n no record remaining");
         }
        }

  return 0;
}

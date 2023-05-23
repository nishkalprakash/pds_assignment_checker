/*NEME K.SRISAI
roll no 22EC30055
question no 1*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int r,*p,n,g=0;
 srand(time(0));
 scanf("%d",&n);
  if(n>0){

  p=(int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
    {
      p[i]=2+rand()%999 ;
    }
  }
  printf("%d-random array:",n);
 if(n>0){
  for(int i=0;i<n;i++)
    {
      printf("%d ",p[i]);
    }
  printf("\n");
  for(int c=0;c<n;c++)
    {
        int f=0 ;
     for(int k=1;k<p[c];k++)
        {
          if(p[c]%k==0)
            {
              f=f+k;
            }

        }
                  if(f==p[c])
            {
             printf("%d, ",p[c]);
             g++;
            }
    }
    if(g!=0)printf("are perfect numbers\n");

 }
 if(g==0)
    {
      printf("\n no perfect number found");
    }
    return 0 ;
}

//Roll no:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int ar[30],m=0,i=0,t=0;

int sum(int ar[],int s)
{
  if(s==0)
    return(ar[0]);
  else
    return(sum(ar,s-1)+ar[s]);

}

int max(int ar[],int s)
{
  if(s==0)
    return(ar[0]);
  else
    {}
}

int reverse(int ar[],int f,int s)
{
  if(f==s)
    return(0);
  else
    {
      reverse(ar,f+1,s-1);
      t=ar[f];
      ar[f]=ar[s];
      ar[s]=t;
    }
}

    


int main()
{
  int i;
  for(i=0;i<30;i++)
    {
      ar[i]=rand()%10+20;
      printf("ar[%d]=%d\t",i,ar[i]);
    }
  printf("\n");
  printf("\nSum=%d",sum(ar,30));
  reverse(ar,0,30);
  printf("\nReverse array");
  for(i=0;i<30;i++)
    printf("%d\t",ar[i]);
  
}



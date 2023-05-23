// Krishna Chaudhari
//Roll no. : 22MT10012
//Q-1 Assignment 7


#include<stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
    int p,q,r,n;
    printf("enter the number in array : \n");
    scanf("%d",&n);
    int *a;
    a = (int*) malloc(n * sizeof(int));
    //time_t t;
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        r = 2+ rand()%999;
        a[i]=r;
    }
    printf("%d-number array is : ",n);
    for(int s=0; s<n; s++)
    {
        printf("%d  ",a[s]);
    }
    printf("\n\n");

int num=0;
int b[n];
for(int i=0;i<n;i++)
{
    num=0;
  for(int k=1;k<a[i];k++)
  {
      if(a[i]%k==0)
        {
            //printf("%d,",k);
            num+=k;
            b[i]=k;
        }
      else
        {
            continue;

      }

  }
  //printf("is factor of %d and sum is %d \n",a[i],num);

  if(num==a[i])
  {
      printf("%d is perfect number \n",a[i]);

  }
  else {
       // printf("no perfect number found");
        continue;

  }



}

    return 0;
}

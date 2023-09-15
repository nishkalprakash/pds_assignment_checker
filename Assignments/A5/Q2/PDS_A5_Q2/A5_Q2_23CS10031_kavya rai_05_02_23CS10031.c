#include<stdio.h>
#include<stdlib.h>
int main()
{
  int arr[50];
  int n,i,j,k;
  printf("Enter the no. of random numbers to be generated:");
  scanf("%d",&n);
  if(n<=50)
    {
      for(i=0;i<n;i++)
	{
	  arr[i]=rand()%50+10;
	}
      for(i=0;i<n;i++)
	{
	  printf("%d\n",arr[i]);
	}
     for(i=0;i<n;i++)
        {

          for(j=i+1;j<n;j++)
           {
              for(k=j+1;k<n;k++)
               {
                 if((arr[i]+arr[j]+arr[k])==60)
                   {
                    printf("array indices : %d %d %d",i,j,k);
                    printf("value stored : %d %d %d respectively",arr[i],arr[j],arr[k]);
                   }
                else
                   {printf("nothing");
                   }
               }
          }
       }
     }
  return 0;
}

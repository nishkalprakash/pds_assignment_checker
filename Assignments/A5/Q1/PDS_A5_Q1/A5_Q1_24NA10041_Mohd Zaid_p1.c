#include <stdio.h>
int main()
//reading n elements and storing them in a size of array N//
{
       int i,j=0,n,N=100,k,t,l;
       int arr[N];
       printf("how many elements you want to read");
       scanf("%d",&n);
       if(n>N)
       printf("error %d>%d",n,N);
       else {
       arr[n]=0;
       k=n-1;
       printf("original array");
       for(i=0;i<n;++i)
       {scanf("%d",&arr[i]);}
//rearranging array, all negetive on the left all postive on the right//   
       for (i=0;i<n;i++)
       {if (arr[i]<0)
	       {
		       l=arr[j];
		       arr[j]=arr[i]; //swapping the values//
		       arr[i]=l;
		       ++j;
	       }
       }
       for(i=n-1;i>=0;--i)
       if(arr[i]>0)
		{
			l=arr[k];
		       arr[k]=arr[i];//swapping the values//
		       arr[i]=l;
		       --k;
       		}
       printf("rearranged array");
       for(i=0;i<n;i++)
       printf("%d",arr[i]);
           }
       return 0;
       }

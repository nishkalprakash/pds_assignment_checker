//Name: Swaraj Dian
//Roll No: 23EC30056

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[50]; //declaring array
  int n,i,x,k=1,p=0,q=0,r=0;
  printf("Enter the number of elements(0-50) you want to add: ");
  scanf("%d",&n);
  if(n<=50)
    {
      for(i=0;i<n;i++)
	{
	  while(k=1)  //generating integers between(0-100)
	    {
	      x=rand()%51;
	      if((x>=10)&&(x<=50))
		break;
	    }
	  a[i]=x; //adding numbers to array
	}
    }
  else
    {
      printf("Invalid input");
      return 0;
    }
  printf("Array generated:\n");  //printing array
  for(i=0;i<n;i++)
    printf("%d  ",a[i]);
  for (p=0;p<=n-3;p++)      //searching for each triplet
    {
      for(q=p+1;q<=n-2;q++)
	{
	  for(r=q+1;q<=n-1;r++)
	    {
	      if ((a[p]+a[q]+a[r])==60)
		{
		  printf("\nThe triplets are %d,%d,%d\n",a[p],a[q],a[r]);
		  printf("The indices are %d,%d,%d\n",p,q,r);
		}
	      else
		break;
	    }
	}
    }
}

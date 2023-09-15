//Ritwik Suresh
//23EE10056
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int  a[50],n,x,y,z,i,temp;
  printf("Ehter the no. of elements in the array:\n");
  scanf("%d",&n);
  if(n>50){
    printf("Invalid input");
    return 0;
  }
  for(i=0;i<n;i++)
    {
      temp = rand()%41;
      a[i] = temp+10;
    }
  printf("The elements of the array are:\n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  printf("\n");
  printf("The triplets that add upto 60 are:\n");
  for(x=0;x<n;x++)
    {
      temp =0;
      temp = a[x];
      for(y=x+1;y<n;y++)
	{
	  temp  += a[y];
	  for(z=y+1;z<n;z++)
	    {
	      temp += a[z];
	      if(temp == 60)
		printf(" a[%d]=%d,a[%d]=%d,a[%d]=%d\n",x,a[x],y,a[y],z,a[z]);
	      temp -= a[z];
	    }
	  temp -= a[y];
	}
    }
  return 0;
}
  
      

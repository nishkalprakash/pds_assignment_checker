//Name: Swaraj Dian
//Roll No: 23EC30056

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[50]; //declaring array
  int n,i,x,k=1,temp,count=0;
  printf("Enter the number of elements(0-50) you want to add: ");
  scanf("%d",&n);
  if(n<=50)
    {
      for(i=0;i<n;i++)
	{
	  while(k=1)  //generating integers between(0-100)
	    {
	      x=rand()%101;
	      if((x>=10)&&(x<=100))
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
  printf("Array generated\n");  
  for(i=0;i<n;i++)
    printf("%d  ",a[i]);
  for(i=2;i<n;i=i+2)
    {
      if(a[i-2]>a[i]) //Interchanging elements
	{
	  temp=a[i];
	  a[i]=a[i-2];
	  a[i-2]=temp;
	  count++;
	}
    }
  printf("\nArray after interchange:\n");
  for(i=0;i<n;i++)
    printf("%d  ",a[i]);
  printf("\nNumber of interchanges: %d\n",count);
}

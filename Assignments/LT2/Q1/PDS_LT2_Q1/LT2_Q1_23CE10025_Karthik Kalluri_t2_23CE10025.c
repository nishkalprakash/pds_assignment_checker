// Karthikk Kalluri 23CE10025
//SET B
#include <stdio.h>
#include <stdlib.h>

int arr[50];//Declaring a global array
int maxmin();
int duplicate();
int highfreq();
int removedup();
int ld();
int li();//Declaration of functions
int main()
{
  int n;
  for(int i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }//Taking random values
    for(int i=0;i<50;i++)
    {
      printf("%d  ",arr[i]);
    }
  do{ 
    printf("1=maxmin\n ");
    printf("2=duplicate\n ");
    printf("3=highest freq\n ");
    printf("4=largestincreasing\n ");
    printf("5=largestdecreasing\n ");
    printf("6=removeduplicate\n ");
    printf("other number=exit\n");
      scanf("%d",&n);

    
    if(n==1)
      {
	maxmin();
      }
    if(n==2)
      {
	duplicate();
      }
    if(n==3)
      {
	highfreq();
      }
    if(n==6)
      {
	removedup();
      }
    if(n==4)
      {
	li();
      }
    if(n==5)
      {
	ld();
      }//input list
    else
      break;
  }while(1);
  
  return 0;
}
int maxmin()
{
  for(int i=0;i<50;i++)
    {
      printf("%d  ",arr[i]);
    }
  int max=-1,min=100;
  for(int i=0;i<50;i++)
    {if(arr[i]<min)
	{
	  min=arr[i];
	}//Finding minimum value
      if(arr[i]>max)
	{
	  max=arr[i];
	}//Finding Maximum value
      
    }
  printf("Max value is %d\n",max);
  printf("Min value is %d\n",min);
}
int duplicate()
{  int dup[50];
    for(int i=0;i<50;i++)
    {
      printf("%d  ",arr[i]);
    }
    int count=0;
    for(int i=0;i<50;i++)
      {
	for(int j=i;j<50;j++)
	  {
	    if(arr[i]==arr[j])
	      {
		count++;
		dup[i]=arr[i];//Finding duplicates
	      }
	  }
      }
    for(int i=0;dup[i]<100&&dup[i]>20;i++)
      {
	printf("%d  ",dup[i]);
	
      }
}
int highfreq()
{int maxcount=0;
  int count=0;
  int n;
      for(int i=0;i<50;i++)
      {
	for(int j=i;j<50;j++)
	  {
	    if(arr[i]==arr[j])
	      {
	        count++;
		if(count>maxcount)
		  {
		    maxcount=count;//Finding the frequency of duplicates
		    n=arr[i];
		    
		  }
	       
	      }
	  }
      }
      printf("%d\n",n);
}
int removedup()
{ int dup[50];
  int count=0;
    for(int i=0;i<50;i++)
    {
      printf("%d  ",arr[i]);
    }
    for(int i=0;i<50;i++)
      {
	for(int j=i;j<50;j++)
	  {
	     if(arr[i]==arr[j])
	      {
		count++;
		dup[i]=arr[i];
		break;//Finding duplicates
	      }
	     
	  }
      }

	  
}
int li()
{
    for(int i=0;i<50;i++)
    {
      printf("%d  ",arr[i]);
    }
}
int ld()
{
    for(int i=0;i<50;i++)
    {
      printf("%d  ",arr[i]);
    }
}

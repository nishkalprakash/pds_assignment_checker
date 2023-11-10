//Roll.no.:23ME10025
//Name:Gargi Mukherjee
//Set B
#include<stdio.h>
#include<stdlib.h>
int arr[50];
int main()
{
  int h;
  for(int i=0;i<50;i++)
    {
      h=rand()%80+20;
      arr[i]=h;
    }
  for(int i=0;i<50;i++)
    {
      printf("Element %d=%d\n",i+1,arr[i]);
    }
  int n;
  while(1)
    {
      printf("enter an integer");
      scanf("%d",&n);
      if (n==1)
	maxMin();
       if (n==2)
	duplicate();
        if (n==3)
	highestFreq();
	 if (n==4)
	largestIncreasing();
	  if (n==1)
	maxMin();
	   if (n==1)
	maxMin();
	    if (n==1)
	maxMin();
	    else
	      break;
    }
      
}
  int maxMin()
  {
     for(int i=0;i<50;i++)
    {
      printf("Element %d=%d\n",i+1,arr[i]);
    }
     int max=0,min=arr[0];
     for(int i=0;i<50;i++)
       {
	 if(arr[i]>max)
	   max=arr[i];
	 if(arr[i]<min)
	   min=arr[i];
       }
     printf("Max value=%d",max);
     printf("Min value=%d",min);
     
  }
   int duplicate()
  {
     for(int i=0;i<50;i++)
    {
      printf("Element %d=%d\n",i+1,arr[i]);
    }
  }
     
   int highestFreq()
  {
     for(int i=0;i<50;i++)
    {
      printf("Element %d=%d\n",i+1,arr[i]);
    }
     int c,n=0,s;
     for(int i=0;i<50;i++)
       {
         for(int j=0;j<50;i++)
	   {
	     if(arr[i]==arr[j])
	       c++;
	   }
	 if(c>n)
	   {
	     n=c;
	     s=arr[i];
	   }
       }
     printf("Highest occurence is %d of element %d",n,s);
  }
  
	   
	int   	largestIncreasing()
	  {
             for(int i=0;i<50;i++)
                   {
                      printf("Element %d=%d\n",i+1,arr[i]);
		   }
	  }
		   
                    
	  
	   
	   
     
	   
	 

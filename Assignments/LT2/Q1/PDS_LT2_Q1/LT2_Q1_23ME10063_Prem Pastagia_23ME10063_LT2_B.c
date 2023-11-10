#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int arr[50];

void maxMin()
{
  printf("The array is:\n");
  int i,j,max=0,min=120,maxi,mini;
  for(i=0;i<50;i++)
    {
      printf(" %d",arr[i]);
      if(arr[i]>max){max=arr[i];maxi=i;}
      if(arr[i]<min){min=arr[i];mini=i;}
    }

  printf("\nThe maximum number is %d\n",max);
  printf("The minimum number is %d\n",min);
}


void largestIncreasing()
{
  int i,j,temp;
  printf("The random array is\n");
  for(i=0;i<50;i++)
    {
      
      printf(" %d",arr[i]);
    }
  printf("\n");
  for(i=0;i<50;i++)
    {
      for(j=i;j<50;j++)
	{
	  if(arr[i]>arr[j])
	    {
	      temp=arr[i];
	      arr[i]=arr[j];
	      arr[j]=temp;
	    }
	}
	}
  printf("The increasing array\n");
  for(i=0;i<50;i++)
    {
      printf(" %d",arr[i]);
    }
  printf("\n");
}
void largestDecreasing()
{
  int i,j,temp;
  printf("The random array is\n");
  for(i=0;i<50;i++)
    {
      
      printf(" %d",arr[i]);
    }
  printf("\n");
  for(i=0;i<50;i++)
    {
      for(j=i;j<50;j++)
	{
	  if(arr[i]<arr[j])
	    {
	      temp=arr[i];
	      arr[i]=arr[j];
	      arr[j]=temp;
	    }
	}
	}
  printf("The decrasing array\n");
  for(i=0;i<50;i++)
    {
      printf(" %d",arr[i]);
    }
  printf("\n");
}

void highestFreq()
{
  
  int i,j,count=0,max=0,index=0;
  printf("The random array is\n");
  for(i=0;i<50;i++)
    {
     
      printf(" %d",arr[i]);
    }
  printf("\n");
    for(i=0;i<50;i++)
    {
      count=0;
      for(j=i;j<50;j++)
	{
	  if(arr[i]==arr[j])
	    {
	      count++;
	    }
	}
      if(count>max){max=count;index=i;}
    }
    printf("The number with highest frequency %d with freq=%d\n",arr[index],max);
}

void duplicate()
{
  int temp[50];
  int k=0;
  int i,j,count=0,max=0,index=0;
  printf("The random array is\n");
  for(i=0;i<50;i++)
    {
      
      printf(" %d",arr[i]);
    }
  printf("\n");
    for(i=0;i<50;i++)
    {
      k=0;
      for(j=i;j<50;j++)
	{
	  if(arr[i]==arr[j])
	    {
	      temp[k]=arr[i];
	      k++;
	    }
	}
    }
    printf("%d",k);
    printf("The number which are repeated\n");
    for(i=0;i<=k;i++)
      {
	printf(" %d",arr[k]);
      }
  
}
void removeDuplicate()
{
  int i,j;
  for(i=0;i<50;i++)
    {
      for(j=1;j<50;j++)
	{
	  
	}
    }
}
int main()

{
  int i,h;
  printf("The random array is\n");
  for(i=0;i<50;i++)
    {
      arr[i]=(rand()%61)+20;
      printf(" %d",arr[i]);
    }
  printf("\n");
  while(1)
    {
      printf("Menu choice\n1 maxMin()\n2  duplicate()\n3  highestFreq()\n4 largestIncresing()\n5  largestDecreasing()\n6  removeDuplicate()\nPlease enter your choice\n");
      scanf("%d",&h);
      if(h==0 || h>6 || h<0){printf("Exiting...\n");return 0 ;}
      switch(h)
	{
	case 1:maxMin();break;
	case 2:duplicate();break;
	case 3:highestFreq();break;
	case 4:largestIncreasing();break;
	case 5:largestDecreasing();break;
	case 6:removeDuplicate(); break;
	
	}
    }
}

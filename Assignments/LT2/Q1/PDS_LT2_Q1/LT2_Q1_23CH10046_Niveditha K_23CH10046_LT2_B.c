//Roll no.: 23CH10046
//Name: Niveditha K
//SET B

#include <stdio.h>
#include <stdlib.h>
int arr[50];
int size = 50;

void minMax(int a[],int s)
{
 for(int i; i<s; i++)
    {
      printf("%d\t",a[i]);
    }
 printf("\n");
 int min=200;
 int max=0;
 for(int i=0; i<s; i++)
   {
     if(a[i]>max) max=a[i];
   }
 for(int i=0; i<s; i++)
   {
     if(a[i]<min && a[i]!=0) min=a[i];
   }
 printf("\nMaximum = %d\n",max);
 printf("Minimum = %d\n",min);
}

void duplicate(int a[],int s)
{
  for(int i=0; i<s; i++)
    {
      for(int j=i+1; j<s; j++)
	{
	  if(a[i] == a[j]) printf("Duplicate = %d\n",a[i]);
	}
    }
}

void highestFreq(int a[],int s)
{
  int hf;
  int count=1;
  int maxCount=0;

  for(int i=0; i<s; i++)
    {
      for(int j=i+1; j<s; j++)
	{
	  if(a[i] == a[j])  count++;
	}
	  if(count>maxCount)
	    {
	      maxCount = count;
	      hf = a[i];
	}
	count=1;
    }
  printf("Highest frequency = %d,",hf);
  printf("Number of times: %d\n",maxCount);
}

void largestIncreasing(int a[],int s)
{
  int *p=a;
  int count=0;
  int maxCount=1;
  for(int i=0; i<s; i++)
    {
      while(p+1 > p && p!=&a[s-1])
	{
	  ++p;
	  ++count;
	  if(count>maxCount) maxCount=count;
	}
    }
}

void largestDecreasing(int a[],int s)
{
  int *p=a;
  int count=0;
  int maxCount=1;
  for(int i=0; i<s; i++)
    {
      while(p+1 < p && p!=&a[s-1])
	{
	  ++p;
	  ++count;
	  if(count>maxCount) maxCount=count;
	}
    }
}

void removeDuplicate(int a[],int s)
{
  for(int i=0; i<s; i++)
    {
      for(int j=i+1; j<s; j++)
	{
	  if(a[i] == a[j]) a[j]=0;
	}
    }
  for(int i=0; i<s; i++)
    {
      printf("%d\t",a[i]);
    }
  printf("\n");
}

int main()
{

  for(int i=0; i<size; i++)
    {
      arr[i] = rand()%81 + 20;
    }
  for(int i=0; i<size; i++)
    {
      printf("%d\t",arr[i]);
    }
  printf("\n");

printf(" 1.maxMin\n 2.duplicate\n 3.highestFreq\n 4.largestIncreasing\n 5.largestDecreasing\n 6.removeDuplicate\n");

 
 int n;
  for(int i=0; ; )
    {
      printf("Enter an integer: ");
      scanf("%d",&n);

      if(n<1 || n>6) return 0;
      else if(n==1) minMax(arr,size);
      else if(n==2) duplicate(arr,size);
      else if(n==3) highestFreq(arr,size);
      else if(n==4) largestIncreasing(arr,size);
      else if(n==5) largestDecreasing(arr,size);
      else if(n==6) removeDuplicate(arr,size);
    }
  
  return 0;
}

//Roll no:23AG10007
//Name:Aninda Bera
//SET B
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int arr[50],a,max=0,min=546787,b[50],d[50],count=0,flag=0,max_f,index,k,c=0,f=0,m=0,l=0,n=0;
  for(int i=0;i<50;i++)
    {
      int j=rand()%81+20;
      arr[i]=j;
    }
  printf("the values stored in the array is:\n");
  for(int i=0;i<50;i++)
    {
      printf(" %d",arr[i]);
    }
  printf("\n");
  void maxMin()
  {
    for(int i=0;i<50;i++)
      {
	if(arr[i]>max)
	  {
	    max=arr[i];
	  }
	if(arr[i]<min)
	  {
	    min=arr[i];
	  }
      }
     printf("the values stored in the array is:\n");
     for(int i=0;i<50;i++)
       {
	 printf(" %d",arr[i]);
       }
     printf("\n");
     printf("MAX:%d\n",max);
     printf("MIN:%d\n",min);
  }
  void duplicate()
  {
    printf("the values stored in the array is:\n");
  for(int i=0;i<50;i++)
    {
      printf(" %d",arr[i]);
    }
  printf("\n");
    for(int i=0;i<50;i++)
      {
	for(int j=i+1;j<50;j++)
	  {
	    if((arr[i]==arr[j]) && (arr[i]!=0))
	      {
		count++;
		arr[j]=0;
	      }
	  }
	if(count>1&&arr[i]!=0)
	  {
	    printf("the number that occur more than once:\n");
	    printf("%d\n",arr[i]);
	  }
      }
  }
  void highestFreq()
  {
    printf("the values stored in the array is:\n");
  for(int i=0;i<50;i++)
    {
      printf(" %d",arr[i]);
    }
  printf("\n");
  for(int j=0;j<50;j++)
    {
      k=0;
      for(int i=j+1;i<50;i++)
	{
	  if(arr[i]==arr[j])
	    {
	      k++;
	    }
	}
      if(max_f<k)
	{
	  max_f=k;
	  index=j;
	}
    }
  printf("the number with highest frequency is %d with frequency %d\n",arr[index],max_f);
  }
  /* void largestIncreasing()
  {
    for(int i=0;i<50;i++)
      {
	b[i]=0;
      }
    for(int i=0;i<50;i++)
      {
	d[i]=0;
      }
    while(n<50)
      {
	if(arr[m]<arr[m+1])
	  {
	    b[l]=arr[m];
	    b[l+1]=arr[m+1];
	    m++;
	    l++;
	  }
	else
	  {
	    while(b[f]!=0)
	      {
		c++;
		f++;
	      }
	    c=0;
	    f=0;
	  }
	    n++;
      }
      }*/
	    
  void removeDuplicate()
  {
    for(int i=0;i<50;i++)
      {
	for(int j=i+1;j<50;j++)
	  {
	    if(arr[i]==arr[j])
	      {
		arr[j]=0;
	      }
	  }
      }
    printf("the modified array is:\n");
    for(int i=0;i<50;i++)
      {
	if(arr[i]!=0)
	  {
	    printf("%d ",arr[i]);
	  }
      }
  }
	
	  
    
	
  while(1)
    {
      printf("\n");
      printf("1:maxMin\n");
      printf("2:duplicate\n");
      printf("3:highestFreq\n");
      printf("4:largestincreasing\n");
      printf("5:largestDecreasing\n");
      printf("6:removeDuplicate\n");
      printf("enter your choice\n");
      scanf("%d",&a);
      if(a==1)
	{
	  maxMin();
	}
      else if(a==2)
	{
	  duplicate();
	}
      else if(a==3)
	{
	  highestFreq();
	}
      else if(a==6)
	{
	  removeDuplicate();
	}
      else
	{
	  printf("wrong choice\n");
	  break;
	}
      
      
    }
  return 0;
}

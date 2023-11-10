//23MF10004
//ANUBHAB SHARMA

#include<stdio.h>
#include<stdlib.h>




int arr[50];
int main()
{
  int i,num;
  for(i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("enter a number between 1-6: ");
  scanf("%d",&num);
  for(i=1;i<7;i++)
    {
      if(i==1)
	{
	  maxMin();
	}
      else if(i==2)
	{
	  duplicate();
	}
      else if(i==3)
	{
	  highestFreq();
	}
      else if(i==4)
	{
	  largestIncreasing();
	}
      else if(i==5)
	{
	  largestDecreasing();
	}
      else if(i==6)
	{
	  removeDuplicate();
	}
    }
      
  return 0;
}


void maxMin()
{
  int i,max=0,min=101;
  for(i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n");
  for(i=0;i<50;i++)
    {
      if (arr[i]>max)
	{
	  max = arr[i];
	}
      if (arr[i]<min)
	{

	  min =arr[i];
	}
    }
  printf("Maximum of all values stored in the array is: %d\n",max);
  printf("Minimum of all values stored in the array is: %d\n",min);
}


void duplicate()
{
  int i,j;
  for(i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n");
  printf("Numbers that are duplicated are: ");
  for(i=0;i<50;i++)
    {
      for(j=i+1;j<50;j++)
	{
	  if(arr[i]==arr[j])
	    {
	      printf("%d\n",arr[i]);
	    }
	}
    }
}


void highestFreq()
{
  int i,j,val[81]={20,21,22,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100},count[81]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},max=0;
  for(i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
																																		for(i=0;i<50;i++)
																																		  {
																																		    for(j=0;j<81;j++)
																																		      {
																																			if(arr[i]==val[j])
																																			  count[i]++
																																			    }
																																		  }
																																		for(i=0;i<81;i++)
																																		  {
																																		    if(count[i]>max)
																																		      max = count[i];
																																		  }
																																		printf("%d ---> %d",val[i],max);
}

																																		  
																																		    
																																		 
																																       


void largestIncreasing()
{
  int i,j;
  for(i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n");
  for(i=0;i<50;i++)
    {
      for(j=0;j<i-1;j++)
	{
	  if(arr[j]>arr[i])
	    {
	      printf("%d",arr[j]);
	    }
	}
    }
}


void largestDecreasing()
{
  int i,j;
  for(i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n");
}


void removeDuplicate()
{
  int i,j;
  for(i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
    }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n");
}

  
  
  
  
  
  
  
  


  

  

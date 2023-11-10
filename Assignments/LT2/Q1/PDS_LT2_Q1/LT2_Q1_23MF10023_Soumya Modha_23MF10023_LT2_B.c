//Roll No:23MF10023
//Name:Modha Soumya Vahini
//Set:B

#include<stdio.h>
#include<stdlib.h>
int main ()
{
  int B[50];
  int i;
  for (int i=0;i<50;i++)
    {
      B[i]=(rand()%100)+20;
    
      printf("Random Integers = %d \n" , B[i]);
      
    }
  printf("1:maxMin\n");
  printf("2:duplicate\n");
  printf("3:highestFreq\n");
  printf("4:largestIncreasing\n");
  printf("5:largestDecreasing\n");
  printf("6:removeDuplicate\n");
  int n;
  scanf("%d",&n);
  printf("enter a number in between 1 to 6 : \n");
      {
	int max=0,min=100;
	for(i=0;i<50;i++)
	  {
	if(B[i]>max)
	  max=B[i];
	else(max=max);
	      }
	printf("Max=%d\n",max);

	for(i=0;i<50;i++)
	  {
	    if(B[i]<min)
	      min=B[i];
	    else(min=min);
		  }
	printf("Min=%d\n",min);
      }
      //duplicate(int j)
      int j;
      for(i=0;i<50;i++)
	{
	  for(j=0;j<50;j++)
	    if(i=!j)
	      B[i]=B[j];
	  printf("the duplicate is %d \n",&i);
	}
      //highestIncreasing()
      for(i=0;i<50;i++)
	B[i]<B[i+1];
      printf("Increasing Order : \n");
      //highestDecreasing()
      for(i=0;i<50;i++)
	B[i]>B[i+1];
      printf("Decreasing Order : \n");
  return 0;
    }
    
      
    
  
    
  

    
  

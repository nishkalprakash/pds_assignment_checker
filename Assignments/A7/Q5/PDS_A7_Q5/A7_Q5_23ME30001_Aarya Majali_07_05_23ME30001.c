//23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 20
int main()
{
  int rollno[size],age[size],marks[size],i,j,k,taken[size];
  for (i=0;i<size;i++)
  {
    taken[i]=0;
  }
  for (i=0;i<size;i++)
    {
      rollno[i]=((rand()%1001)+1000);
    }
  for (i=0;i<size;i++)
    {
      printf(" rollno[%d]=%d\n",i,rollno[i]);
    }
    for (i=0;i<size;i++)
    {
      age[i]=((rand()%11)+15);
    }
  for (i=0;i<size;i++)
    {
      printf(" age[%d]=%d\n",i,age[i]);
    }
  for (i=0;i<size;i++)
    {
      marks[i]=((rand()%101)+0);
    }
  for (i=0;i<size;i++)
    {
      printf(" marks[%d]=%d\n",i,marks[i]);
    }
  printf("same age\n");
  for (i=0;i<size;i++)
    {
      int count=1; 
      if (taken[i]==1)
      continue;
      taken[i]=1;
      for (j=i+1;j<size;j++)
	{
	  if (age[i]==age[j])   //checking for age equality
            {  taken[j]=1;
              count++;
              if (count>1)
              {
                printf("Roll:%d  Age:%d  Mark:%d\n",rollno[j],age[j],marks[j]);
                
              }
              
	    }
	}
      if (count>1)
      {printf("Roll:%d  Age:%d  Mark:%d\n",rollno[i],age[i],marks[i]);}
    }
  printf("same marks\n");
  for (i=0;i<size;i++)
    {
      int countx=1; 
      if (taken[i]==1)
      continue;
      taken[i]=1;
      for (j=i+1;j<size;j++)
	{
	  if (marks[i]==marks[j])     // checking for marks equality
            {  taken[j]=1;
              countx++;
              if (countx>1)
              {
                printf("Roll:%d  Age:%d  Mark:%d\n",rollno[i],age[i],marks[i]);
                
              }
              
	    }
	}
      if (countx>1)
      {printf("Roll:%d  Age:%d  Mark:%d\n",rollno[i],age[i],marks[i]);}
    }
  
  for (i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      int change1=rollno[i],change2=rollno[j];
      if (rollno[i]>rollno[j])     // sorting roll nos in ascending order
      {
        change1=rollno[j];
        change2=rollno[i];
      
        printf("sorted roll nos");
        printf("Roll : %d   Age : %d  Mark: %d\n",rollno[i],age[i],marks[i]); //printing the sorted array
      }
    }
  }
      
  
  
  
  return 0;
}
  
	    
      
  

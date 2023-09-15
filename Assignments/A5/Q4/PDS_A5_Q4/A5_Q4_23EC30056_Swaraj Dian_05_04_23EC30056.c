#include<stdio.h>
#include<stdlib.h>
int main()
{
  int roll[20];
  int age[20];
  int marks[20];
  int m[20];
  int i,k=1,x,f=0,j;
  for(i=0;i<20;i++)
	{
	  while(k=1)  //generating integers 
	    {
	      x=rand()%2001;
	      if((x>=1000)&&(x<=2000))
		break;
	    }
	  roll[i]=x; //adding numbers to array
	}
  for(i=0;i<20;i++)
	{
	  while(k=1)  //generating integers 
	    {
	      x=rand()%26;
	      if((x>=15)&&(x<=25))
		break;
	    }
	  age[i]=x; //adding numbers to array
	}
  for(i=0;i<20;i++)
	{
	  x=rand()%101;
	  marks[i]=x; //adding numbers to array
	}
  for (i=0;i<20;i++)
    printf("Roll: %d\tAge: %d\tMarks: %d\n",roll[i],age[i],marks[i]);
  for (i=0;i<10;i++)
    m[i]=-1;
  printf("\nstudents with same marks(if any)\n");
  for (i=0;i<19;i++)
    {
      f=0;
      m[i]=0;
      for(j=i+1;j<20;j++)
	{
	  m[j]=0;
	  if ((marks[i]==marks[j])&&(m[j]!=-1))
	    {
	      m[j]=0;
	      printf("Roll: %d\tAge: %d\tMarks: %d\n",roll[j],age[j],marks[j]);
	      f=1;	     
	    }
	  if (f==1)
	   printf("Roll: %d\tAge: %d\tMarks: %d\n",roll[i],age[i],marks[i]);
	}
    }
}

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int i,u1=2000,l1=1000,u2=25,l2=15,u3=100,l3=0,j ;     
  int Roll[20];
  int age[20];
  int marks[20];
  // taking random roll numbers as input within the defined range
  printf("Take random roll numbers");
  for(i=0;i<20;i++)
    Roll[i]=rand()%(u1-l1+1)+l1;
  // taking  random ages as input within the defined range
   printf("Take random ages");
  for(i=0;i<20;i++)
    age[i]=rand()%(u2-l2+1)+l2;
  //   taking  random marks asinput within the defined range
  printf("Take random marks");
  for(i=0;i<20;i++)
	marks[i]=rand()%(u3-l3+1)+l3;
  // checking the equality in ages
  printf("The details of students having same ages");
  for(i=0;i<20;i++)
    { for(j=0;j<i;j++)
	if(age[i]==age[j])
	  printf("Roll = %d Age= %d Marks=%d\n", Roll[i],age[i],marks[i]);
    }
  // checking the equality in marks
   printf("The details of students having same marks");
  for(i=0;i<20;i++)
    { for(j=0;j<i;j++)
	if ( marks[i]==marks[j])
	  printf("Roll = %d Age= %d Marks=%d\n", Roll[i],age[i],marks[i]);
    }
  // Arranging the details in ascending order of roll number
  printf("The details of students in ascending orderof their roll numbers");
  for(i=0;i<20;i++)
    { for(j=0;j<20;j++)
	if(Roll[i]>Roll[j])
	  { Roll[i]=Roll[j];
	    printf("Roll = %d Age= %d Marks=%d\n", Roll[i],age[i],marks[i]);}
      if(Roll[i]<Roll[j])
	continue;
    }
  return 0;
}

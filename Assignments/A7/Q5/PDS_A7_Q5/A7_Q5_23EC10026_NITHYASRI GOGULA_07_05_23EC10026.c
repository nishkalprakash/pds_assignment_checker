#include<stdio.h>

int main ()
{
  int i,j;
  int stud [20][3];  //declaring 2D 

  // reading the student information
  for(i=0;i<20;i++)
    {
      printf("\nEnter information for student %d\n",i);
      printf("\n Enter roll no.  ");
      scanf("%d",&stud[i][0]);

      printf("\n Enter age  ");
      scanf("%d",&stud[i][1]);

      printf("\n Enter markes  ");
      scanf("%d",&stud[i][2]);
    }

  // printing the student 
  
for(i=0;i<20;i++ )
    {
      printf("\n Roll: %d Age:%d Mark: %d\n",stud[i][0],stud[i][1],stud[i][2]);
	}
 
 return 0;
}

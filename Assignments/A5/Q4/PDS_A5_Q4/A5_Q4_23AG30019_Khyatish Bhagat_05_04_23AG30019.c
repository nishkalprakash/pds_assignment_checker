#include<stdio.h>

int main ()
{
  int rollno[20],age[20],marks[20];
   int i;
  rollno[i]=rand()%1001;
  age[i]=rand()%11;
  marks[i]=rand()%101;

 
  for (i=0;i<20;i++);
  {
    printf (" Enter the roll no of student : %d\n",i+1);
    scanf ("%d",rollno[i]);
    printf(" Enter the age of student : %d\n", i+1);
    scanf ( "%d", age[i]);
    printf (" Enter the marks of student:%d\n",i+1);
    scanf("%d", marks [i]);
     }



  
  return 0;
}
  

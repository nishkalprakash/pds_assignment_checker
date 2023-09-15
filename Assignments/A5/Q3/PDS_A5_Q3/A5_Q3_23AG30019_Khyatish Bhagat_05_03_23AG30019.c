
#include <stdio.h>


int main()
{
int n ;
printf("Enter the number of students\n");
 scanf("%d",&n);
 if (n>=10)
   printf( "Wrong Input:Number of students must be equal to or less than 10");
 
int i;
unsigned int rollno[10];
float cgpa[10];

int a[10] ;
for (i=0; i<n;i++)
{
printf("Enter Roll Number of student %d\n",i+1);
 scanf("%u",&rollno[i]);
 printf (" Enter CGPA of student %d\n",i+1);
 scanf ("%f",&cgpa[i]);
  }

 int sum;
 double avg;
 
 for ( i=0;i<n;i++)
   {
     printf ("Roll Number : %u CGPA :%f\n", rollno[i], cgpa[i]);
   }

 sum=0;
 for (i=0;i<n;i++)
	 {
	   sum = sum + cgpa[i];
	   avg = sum/n;
	 }
	   printf ("The average CGPA of students=%lf",avg);

	   int x
	   
	     if (cgpa[i]*100=cgpa[i+x]*100;x>0 && x<10;x++)
	       printf (" The roll no of students with equal cgpa are : %d %d ", & cgpa[i] &cgpa[i+x]);
	       
	       
	   
	   
	 
 
return 0;
}

//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include <stdio.h>
#include<stdlib.h>

int main()
{
  int i, j, r, a ,m , R[20], A[20], M[20];
  
  for(i=0;i<20;i++)       // To store random values in arrays
    {
      R[i]=rand()%1001+1000;
      A[i]=rand()%11+15;
      M[i]=rand()%100;
    }

  printf("\na. Students with same Roll No. \n ");  //  Print details of students with same roll no
    
    for(i=0;i<20;i++)
      {
	for(j=i+1;j<19;j++)
	  {
	    if(R[i] == R[j])
	      {
        	printf("Roll: %d Age: %d Marks: %d\n",R[i],A[i],M[i]);
	      }	
	  }	
      }
    
    printf("\n\nb. Students having Identical marks: \n");   // Print details of students having identical marks
    
     for(i=0;i<20;i++)
      {
	for(j=i+1;j<19;j++)
	  {
	    if(M[i]==M[j])
	      {
        	printf("Roll: %d Age: %d Marks: %d\n",R[i],A[i],M[i]);
	      }
	  }	
      }


         printf("\nc. Details of Students arranged order of their roll no: \n");   
   
     for(i=0;i<20;i++)                        // Arrange student details in accending order of their roll no
     {
       for(j=i+1;j<19;j++)
	 {
	   if(R[i] > R[j])
	     {
	       r = R[i];
	       R[i]=R[j];
	       R[j]=r;

	       a = A[a];
	       A[i]=A[j];
	       A[j]=a;

	       m = M[i];
	       M[i]=M[j];
	       M[j]=m;
	       
	     }
	 }
     }

   for(i=0;i<20;i++)
     {
      	printf("Roll: %d Age: %d Marks: %d\n",R[i],A[i],M[i]);          // Print details of students in accending order of their roll no
     }   
     return 0;
}

#include <stdio.h>
int main()
{
  int n, i, z, count;
  unsigned int roll[10], r;
  float CGPA[10], avg=1.00, c;
  printf("Enter the number of students for which inputs will be taken: ");
  scanf("%d", &n);
  if(n>10)
    {
      printf("Wrong input");
    }

  //printing format
   for(i=0; i<n; i++)
     {
   printf("Enter the roll number of students: ");
   scanf("%u", &roll[i]);
    
   printf("Enter the CGPA of students: ");
   scanf("%f", &CGPA[i]);
     }

   for(i=0; i<n; i++)
     {
       printf("Roll number: %u \t", roll[i]);
       printf("CGPA: %0.2f", CGPA[i]);
       printf("\n");
     }
   //finding average CGPA
   for(i=0; i<n; i++)
     {
       avg= CGPA[i]/(float)n;
     }
   printf("Average CGPA: %0.2f ", avg);

   printf("Displaying roll numberand CGPA of students having identical CGPA\n " );

   //printing identical CGPA
  for(z=0; z<=n;z++)
    {
      count=0;
      for(i=0; i<n; i++)
	{
	  if(CGPA[i]== z)
	    {
	      count++;
	      if(count==1)
		{
		  r=roll[i];
		  c=CGPA[i];
		}
	      else  if(count==2)
		{
	     printf("Roll %u  CGPA %0.2f\n ", r, c);
	     
	    printf("Roll %u  CGPA %0.2f\n ", roll[i], CGPA[i]);
		}
	      else if(count>2)
		{
		   printf("Roll %d  CGPA %0.2f\n ", roll[i], CGPA[i]);
		}
	    }
		
	  }
	}

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,k,n,l,m;
  float CGPA,b[10],sum=0,avg ;
  int  a[10];
  printf("Enter the of students(n) (max=10) \n");
  scanf("%d",&n);
  if (n>10)
    printf("Prog terminated because n>10 \n");
  else
    
    { for (k=0;k<n;k++)
	{
	  printf ("Enter the roll no and CGPA of student %d \n",i+1);
        scanf("%d%f",&a[i],&b[j]);

      sum=sum+b[j];
	
      avg=sum/n;
	}
      printf("Student no. %d \t roll no %d \t CGPA %f \n",i,a[i],b[j]);
      printf ("Avg CGPA is %f \n",avg);

      for (k=0;k<n;k++)
	while(l!=m)
	if (b[l]=b[m])
	  printf ("Student %d \t %d roll no. %d \t %d have samge cg %f \n",l,m,a[l],a[m],b[l]);
      
    }
}
  

      
      

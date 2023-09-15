# include<stdio.h>
int main()
{
  int n,i,j,m,k,l;
  float CGPA[10];         // defining two arrays
  unsigned int Roll[10] ;        

  printf("Enter the number of students"); 
  scanf("%d" ,&n);                      
  printf("Enter the Roll Numbers");
   for(i=0;i<n;i++)
   scanf("%u",&Roll[i]);
   // Taking inputs in arrays
   printf("Enter the CGPAs");
 for(i=0;i<n;i++)
  scanf("%f",&CGPA[i]);
for(i=0;i<n;i++)
 printf("Roll Number=%d CGPA= %f\n",Roll[i],CGPA[i]);

   for (i=0;i<n;i++)
     {  for (j=0;j<i;j++)                                           // checking the equality
        {  k= (int)(CGPA[i]*100);
	 l= (int)(CGPA[j]*100);
        if (k==l)
	  printf("The two alike CGPAs are CGPA[%d] and CGPA[%d]", i,j );
	
         }
       
        }
return 0;
}

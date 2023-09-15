//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  unsigned int Roll[10];
  int n,i,j,k=0;
    float CGPA[10],average,sum=0.0;
  printf("Enter the number of students");
  scanf("%d",&n);
  if(n>10){
    printf("Entered size exceeds\n");
    return 0;
  }
  printf("Enter the roll numbers of students\n");
  for(i=0;i<n;i++)
    scanf("%u",&Roll[i]);
  printf("Enter the CGPA of students\n");
     for(i=0;i<n;i++)
       scanf("%f",&CGPA[i]);
   printf("Details of students:\n");
   printf("Roll number\tCGPA\n");
   for(i=0;i<n;i++){
	printf("%u\t\t%f\n",Roll[i],CGPA[i]);
	sum=sum+CGPA[i];
   }
   average = (sum/n);
   printf("Average CGPA of the students=%f\n",average);
   for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
       if(((int)(CGPA[i]*100)) == ((int)(CGPA[j]*100)))
	 k++;
     }
   }
   if(k>0){
   printf("Students having equal CGPA(two digit accuracy)\n");
   printf("Roll number\tCGPA\n");
     for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
       if(((int)(CGPA[i]*100)) == ((int)(CGPA[j]*100)))
	 { printf("%d\t\t%f\n",Roll[i],CGPA[i]);
       printf("%d\t\t%f\n",Roll[j],CGPA[j]);}
     }
     }
   }
     return 0;
}
	 

      

#include<stdio.h>

int main()
{
  int l[10],i,j,sum;
  float m[10];

  for(i=0;i<10;i++)
    {
      printf("enter the details of student roll no_cgpa");
      scanf("%d%f",&l[i],&m[i]);
    }
  printf("the details of student");
  printf("roll no_cgpa");
  for(i=0;i<10;i++)
    {
      printf("%d\n %f\n",l[i],m[i]);
      sum+=m[i];
    }
  float avg = sum/10;
  printf("avg cgpa of students is %f\n",avg);
  for(i=0;i<10;i++){
    for(j=1;j<10;j++){
      if( m[i]=m[j])
	   printf("roll no:%d/n cgpa :%f\n",l[i],m[i]);
    }
  }
}

  
  
      
  
  
  
 
  
 
 

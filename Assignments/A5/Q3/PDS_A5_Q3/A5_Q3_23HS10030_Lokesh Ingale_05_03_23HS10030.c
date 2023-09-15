//Name :Lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
#include<stdlib.h>
int main ()
{ int n ;
  uint roll[10];
  float sum=0,avg,cgpa[10];
  printf("The number of such numbers to be generated:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter roll of student %d:\n",i+1);
    scanf("%u",&roll[i]);
    printf("Enter cgpa of student%d:\n",i+1);
    scanf("%f",&cgpa[i]);
  }
  for(int i=0;i<n;i++){
    printf("The roll no and cgpa of student %d is %u , %f\n ",i+1,roll[i],cgpa[i]);
  }
  for(int i=0;i<n;i++){
    sum=sum+cgpa[i];
  }
  avg=sum/n;
  printf("The average of numbers is :%f\n",avg);
  for(int i=0;i<n;i++){
    for(int j=1+i;j<n;j++){
      if((int)100*cgpa[i] == (int)100*cgpa[j]){
	printf("cgpa of %d=cpga of %d,cgpa=%f\n",roll[i],roll[j],cgpa[i]);
      }
    }
  }
  return 0 ;
}
	
     
  
    
      

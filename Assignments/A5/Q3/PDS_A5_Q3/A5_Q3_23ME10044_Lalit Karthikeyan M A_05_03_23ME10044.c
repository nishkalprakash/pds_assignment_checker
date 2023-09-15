//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>

int main(){
  unsigned int roll[10],r;
  int n,flag=0,check=0,a1,a2,h[10];
  float cg[10],c,s=0.00,avg;
  
  printf("\nEnter the total number of students (<10): \n");
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    h[i]=0;
  }
  
  for(int i=0;i<n;i++){
    printf("Enter the Roll Number: \n");
    scanf("%u",&r);
    printf("Enter the CGPA(out of 10.00): \n");
    scanf("%f",&c);
    roll[i]=r;
    cg[i]=c;
  }

  //a.printing the details

  printf("\n\nThe details of the students: \n\n");
  for(int i=0;i<n;i++){
    printf("Roll Number: %u   CGPA: %f\n",roll[i],cg[i]);
  }

  //b.Calculating Average

  for(int i=0;i<n;i++){
    s+=cg[i];
  }
  avg=s/n;
  printf("\n\nAverage CGPA of students: %f\n",avg);

  //C.Students with identical CGPA
  printf("\n\nStudents with Identical CGPA (Upto two decimal places) :\n");
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
	a1=cg[i]*100;
	a2=cg[j]*100;
	if(a1==a2){
	  printf("Roll Number: %u   CGPA: %f\n",roll[j],(float)a1/100);
	  flag=1;
 
	  check=1;
	}
      }
      if(flag==1){
	printf("Roll Number: %u   CGPA: %f\n",roll[i],(float)a1/100);
	printf("   ............\n");
	flag=0;
      }
    
  }
  if(check==0)printf("Not found!!\n");
  return 0;
}

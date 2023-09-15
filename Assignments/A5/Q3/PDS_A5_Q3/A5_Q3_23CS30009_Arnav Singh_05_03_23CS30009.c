//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  unsigned int a[10];   //To store roll no.
  float b[10];   //To store CGPA
  int n,flag=0;
  //We will turn flag to 1 if at least 2 students have same CGPA.
  //If flag remains 0, we will print a message that no 2 have same CGPA.
  float avg=0;
  while (1){        //Input validation
    printf("Enter the number of students (max 10): ");
    scanf("%d", &n);
    if (n>10) printf("Wrong input. Enter again.");
    else break;
  }
  for (int i=0; i<n; i++){
    printf("Enter roll number %d: ", i+1);
    scanf("%u", &a[i]);
    printf("Enter CGPA %d: ", i+1);
    scanf("%f", &b[i]);
  }
  printf("Read Data: \n");
  for (int i=0; i<n; i++){
    printf("%12u \t %8.6f \n", a[i], b[i]);
  }
  //Finding average CGPA
  for (int i=0; i<n; i++){
    avg+=b[i];
  }
  avg/=n;
  printf("The average CGPA is %f.\n", avg);
  printf("Students with same CGPA: \n");
  for (int i=0; i<n-1; i++){
    int flag2=0;
    //flag2 will be turned 1 if >=2 students have CGPA=b[i]
    //And then we will make those CGPA= -1 so that the same CGPA is not
    //considered in further iterations
    if (b[i]!=-1){
      for (int j=i+1; j<n; j++){
        if ( ((int)(b[i]*100)) == ((int)(b[j]*100)) ){
	  flag=1;
	  flag2=1;
	  break;
	}
      }
      if (flag2==1){
	printf("Roll no. of students with CGPA %f:", ((int)(b[i]*100))/100.0);
	printf("\t%u", a[i]);
	for (int j=i+1; j<n; j++){
	  if ( ((int)(b[i]*100)) == ((int)(b[j]*100)) ){
	    printf("\t%u", a[j]);
	    b[j]=-1;
	  }
	}
	printf("\n");
      }
    }
  }
  if (flag==0) printf("No 2 students have same CGPA.\n");
  return 0;
}

//Roll No.- 23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int roll[10];
  float cgpa[10];
  int num, sum=0;
  float average;

  printf("Enter the total number of inputs to be taken\n");
  scanf("%d", &num);

  for (int i=0; i<=num-1; i++) {
    printf("Enter the Roll No. of Student %d\n",i+1);
    scanf("%d", &roll[i]);
  }

  printf("\n");

  for (int i=0; i<=num-1; i++) {
    printf("Enter the CGPA of Student %d\n",i+1);
    scanf("%f", &cgpa[i]);
  }

  for (int i=0; i<=num-1; i++) {
    printf("S no.-%d",i+1);
    printf(" Roll No.-%d", roll[i]);
    printf(" CGPA-%f", cgpa[i]);
    printf("\n");
  }

  for (int i=0; i<=num-1; i++) {
    sum=sum+cgpa[i];
  }

  average=sum/num;
  printf("The average CGPA of students is %f", average);

  for (int i=0; i<=num-1; i++) {
    printf("\n");
    int flag =0;
    int freq=1;
    for (int j=i-1;j>=0; j--) {
      if (((int)(cgpa[i]*100))/100==((int)(cgpa[j]*100))/100) {     //trying for 2 decimal comparision
	  flag=1;
	  break;
	}
	}
      
      if (flag==0) {
	for (int j=i+1; j<=num-1; j++) {
	  if (((int)(cgpa[j]*100))/100==((int)(cgpa[i]*100))/100){
	    if (freq==1) {
	      printf("CGPA: %f ",(float) ((int)(cgpa[i]*100))/100);  //trying for 2 decimal places :)
	      printf("Roll Nos- ");
	      printf("%d", roll[i]);
	    }
	    freq=freq+1;
	    printf(" %d", roll[j]);
	  }
	  }
	}
      }
      
  return 0;
}

//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>

int main()
{
  unsigned int roll[10], n, temp,count;
  float cgpa[10], avgcg=0;
  printf("Enter the no. of students");  //takes the no. of students
  scanf("%d", &n);
  for (int i=0;i<n;i++){      //asks for and takes the roll no and cgpa of students
    printf("\nEnter roll no. and cgpa of student %d",i+1);
    scanf("%d %f", &roll[i], &cgpa[i]);
  }
  for (int i=0;i<n;i++){      //prints the details of students and also computes average cgpa
    printf("\nStudent %d:\n Roll No.: %d CGPA: %f",i+1, roll[i], cgpa[i]);
    avgcg+=cgpa[i]/n;
  }
  printf("\n\nAverage CGPA of students: %f\n\n",avgcg);
  for (int i=0;i<1000;i++){       //iterates to 1000 and checks the value of cgpa to two digit accuracy and prints if the no. is equal to i
    count=0;
    for (int j=0;j<n;j++){
      temp=cgpa[j]*100;
      int k;
      if (temp==i){             //checks if the value of cgpa is equal for more than one student or not and prints the details of student if found true
	if (count==0){
	  k=j;
	  count++;
	}
	else if(count==1){
	  printf("\nStudent %d:\n Roll no.: %d CGPA: %f ",k+1 , roll[k], cgpa[k]); 
	  count++;
	}
	if (count>1){
	  count++;
	  printf("\nStudent %d:\n Roll no.: %d CGPA: %f ",j+1 , roll[j], cgpa[j]);
	}
      }
    }
  }
  return 0;
}
    

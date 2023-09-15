//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int contain(int elem, int size, int arr[]){
  for(int c0 = 0; c0 < size; c0++){
    if(elem == arr[c0]){
      return 1;
    }
  }
  return 0;
}

int main(){
  unsigned int roll_num[10];
  float cgpa[10];
  float avg = 0;
  int num_std = 0;
  int flag = 0;
  int equality = 0;
  int equal[10];
  int equalroll[10];
  int constant = 0;

  printf("Enter the number of students:\n");
  scanf("%d", &num_std);

  while(num_std>10 || num_std<1){
    printf("Enter an integer within the range [1,10]:\n");
    scanf("%d", &num_std);
  }

  for(int inp = 0; inp < num_std; inp++){
    printf("\nEnter the Roll number of the student:");
    scanf("%u", &roll_num[inp]);
    printf("\nEnter the CGPA of the student:");
    scanf("%f", &cgpa[inp]);
  }

    printf("\nRoll number     CGPA\n\n");
  for(int cc = 0; cc < num_std; cc++){
    printf("%u     %f\n", roll_num[cc], cgpa[cc]); 
  }

  for(int c0 = 0; c0 < num_std; c0++){
    avg += (cgpa[c0]/num_std);
  }

  printf("The average CGPA is = %f\n", avg);

  for(int c1 = 0; c1 < num_std; c1++){
    int cgpac1 = ((cgpa[c1])*100);
    for(int c2 = 0; c2 < num_std; c2++){
      int cgpac2 = ((cgpa[c2])*100);
      if(cgpac1 == cgpac2  && !contain(roll_num[c1], num_std, equal)){
	if(cgpac1 != constant){
	  printf("\n");
	}
	printf("%u     %f\n", roll_num[c2], cgpa[c2]);
	equal[equality] = roll_num[c2];
	equality++;
	flag = 1;
	constant = cgpac1;
      }
    }
  }
  if(flag == 0){
    printf("No students have same CPGA\n");
  }
}

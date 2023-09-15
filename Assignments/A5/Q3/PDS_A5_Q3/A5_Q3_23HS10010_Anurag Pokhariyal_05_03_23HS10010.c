// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int main()
{
  uint roll[10],num=0,sum=0;
  float CGPA[10];
  printf("Enter the number of students:");

  scanf("%d",&num);
  for(int i =0;i<num;i++){
    if (num > 0 && num <11){
      printf("Enter the roll no. of student no. %d: ",i+1);
      scanf("%u",&roll[i]);
      printf("Enter the CGPA of the student: ");
      scanf("%f",&CGPA[i]);
      sum +=CGPA[i];
    }else{
       printf("Num does not lie between 0 and 10, please re-run the code.");

      }
  }
  printf("The Details of students entered are as follows:\n");
    for(int i =0;i<num;i++){
    printf("Roll no: %u  CGPA: %f\n",roll[i],CGPA[i]);
  }
  printf("The average CGPA of the students is: %f\n",(float)sum/num);

  for (int i=0;i<num;i++){
    int arr[10];
    for(int j =0;j<num;j++){
      int numi = 100*CGPA[i], numj = 100*CGPA[j];
      printf("%d %d",numi,numj);
      if(numi > numj && j > i){
	for(int k =0;k<num;k++){
	  arr[k] = roll[j];
      }
      printf("The roll no. of students with the CGPA %.2f is %u,",CGPA[i],roll[i]);
      for(int i = 0;i<num;i++){
	printf("%u,",arr[i]);
	
      }
      printf("\n");
      
    
      
    }
    }
  }



    

  return 0;
}

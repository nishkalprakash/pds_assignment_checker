//Name: Shobhit kumar
//Roll no: 23HS10050

#include<stdlib.h>
#include<stdio.h>

int main(){
  int n;
  uint roll[10];
  float avg=0,sum=0,cgpa[10];

  printf("Enter the no of students:");
  scanf("%d",&n);
  
  for(int i=1;i<n+1;i++){
    printf("Enter the roll no of student %d: ",i);
    scanf("%u",&roll[i]);
    printf("Enter the cgpa of student %d: ",i);
    scanf("%f",&cgpa[i]);
  }
  for(int i=0;i<n;i++){
	  printf("The roll no and cgpa of student is %u , %f\n",roll[i],cgpa[i]);
	}
	for(int i=0;i<n;i++){
	  sum=sum+cgpa[i];
	}
	avg=sum/n;	
	printf("Average cgpa of students: %f\n",avg);
	
        printf("The student with identical cgpa\n");
	
	for(int i=0;i<n;i++){
	  for(int j=i+1;j<n;j++){
	    if(cgpa[i]==cgpa[j]){
	      printf("cgpa of student roll no-%d is: %f\n",roll[i],cgpa[i]);
	    }
	  }
	}
	return 0;

	}
     

	
    

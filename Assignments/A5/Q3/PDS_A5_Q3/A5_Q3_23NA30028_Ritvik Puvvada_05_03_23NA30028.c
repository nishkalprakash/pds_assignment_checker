//Roll No: 23NA30028
//Name: Ritvik Puvvada

#include <stdio.h>
int main(){
  float cg[10],count=0.00;
  unsigned rno[10];
  int i,j,n;
  printf("Enter the number of students:");
  scanf("%d",&n);
  printf("Enter the roll numbers of the students");
  for(i=0;i<n;i++){
    scanf("%u",&rno[i]);
  }
  printf("Enter the cgpa of students:");
  for(i=0;i<n;i++){
    scanf("%f",&cg[i]);
  }
  printf("The details of the student are:\n");
  for(i=0;i<n;i++){
    printf("%u: %f\n",rno[i],cg[i]);
    count=count+cg[i];
    }
  printf("The average CGPA is %f\n",(count/n));
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      printf("%f %f\n", cg[i], cg[j]);
      if(cg[i]==cg[j]){
	printf("%u\n",rno[j]);
      }
    }
  }
  return 0;
}
  

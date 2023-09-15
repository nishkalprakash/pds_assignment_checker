//Name:Adarsh Singh
//Roll No.:23GG10001
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n,j,roll[10],ci,cj;
  float CGPA[10],sumCGPA=0;
  printf("Enter the number of values to be stored in the array:\n");
  scanf("%d",&n);
  printf("Enter the roll numbers of the students:\n");
  for(i=0;i<n;i++){
    scanf("%u",&roll[i]);
  }
  printf("Enter the CGPA of the students:\n");
  for(i=0;i<n;i++){
    scanf("%f",&CGPA[i]);
  }
  printf("\nThe details of the all the students entered are:\n");
  for(i=0;i<n;i++){
    printf("Roll No.:%u CGPA:%f\n",roll[i],CGPA[i]);
  }
  for(i=0;i<n;i++){
    sumCGPA=sumCGPA+CGPA[i];
  }
  printf("\nThe average CGPA of the students is:%f\n",(sumCGPA/n));
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      ci=(CGPA[i]*100);
      cj=(CGPA[j]*100);
      if(ci==cj){
        printf("Roll:%u CGPA:%0.2f\n",roll[i],CGPA[i]);
	printf("Roll:%u CGPA:%0.2f\n",roll[j],CGPA[j]);
      }
    }  
  }
  return 0;
}  

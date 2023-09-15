//tanishq sura
//23CS10071

#include<stdio.h>

int main(){
  unsigned int rollno[10];
  float cg[10];
  int n,l;
  float sum=0;
  printf("tell the no. of students:");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("give the roll no of student %d  ",i+1);
    scanf("%u",&rollno[i]);
    printf("give cgpa of student %d  ",i+1);
    scanf("%f",&cg[i]);
  }
  for(int i=0;i<n;i++){
    printf("the roll no and cgpa of student %d are roll no. %u and cgpa = %f\n",i+1,rollno[i],cg[i]);
  }
  for(int i=0;i<n;i++){
    sum=sum+cg[i];
  }
  printf("the average cgpa is: %f\n\n", sum/n);
  for(int i=0;(i<n);i++){
    
    if(cg[i]!=-1){
      l=0;
      for(int j=i+1;j<n;j++){        //checker for
	if((int)(cg[i]*100)==(int)(cg[j]*100)){
	l=1;
	break;
	}
     }
     if(l==1){
      printf("students with same cgpa:\nthe roll no. and cgpa of student %d = %u and %f \n ",i+1,rollno[i],cg[i]);
      for(int j=i+1,l=0;j<n;j++){
       if((int)(cg[i]*100)==(int)(cg[j]*100)){
          printf("the roll no. and cgpa of student %d = %u and %f \n ",j+1,rollno[j],cg[j]);
	  cg[j]=-1;
       }
      }printf("\n\n");
    }
    }
  }
  return 0;
}

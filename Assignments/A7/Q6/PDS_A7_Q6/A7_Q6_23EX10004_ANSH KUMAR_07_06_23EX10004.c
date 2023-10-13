//roll-23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
int main(){
  int roll[10];
  float CGPA[10];
  int n;
  float sum=0;
  float avg;
  printf("enter the number of students\n");
  scanf("%d",&n);
  printf(" start entering the roll no\n");
  for(int i=0;i<n;i++){
    scanf("%d",&roll[i]);
      }
  printf("start entering the CGPA\n");
   for(int i=0;i<n;i++){
     scanf("%f",&CGPA[i]);
      }
   for(int i=0;i<n;i++){
printf("Student:%d Roll :%d CGPA:%f \n",i+1,roll[i],CGPA[i]);
}
   for(int i=0;i<n;i++){
     sum+= CGPA[i];
   }
   avg=(sum)/n;
   printf("average is %f\n",avg);
   for(int i=0;i<n;i++){
     for(int j=1;j<=n-i;j++){
       if(CGPA[i]==CGPA[i+j]){
	 printf("roll:%d and %d CGPA=%f \n",roll[i],roll[i+j],CGPA[i]);
       }
     }
   }
   return 0;
}


    

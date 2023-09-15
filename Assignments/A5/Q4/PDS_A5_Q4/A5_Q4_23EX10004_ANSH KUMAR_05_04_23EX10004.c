// roll -23EX10004
//NAME -ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int p,q,m,n;
  int roll[20];
  int age[20];
  int marks[20];
  int arr_std[60]={roll,age,marks};
  for(int i=0;i<20;i++){
    printf("student %d:: roll : %d, age : %d, marks :%d \n",i+1 ,roll[i]=1000+rand()%1000 ,age[i]=15+rand()%10, marks[i]=rand()%100);
  }
  for(p=0;p<19;p++){
    for(q=p+1;q<20;q++){
      if(age[p]==age[q]){
	printf("the roll number haveing same age are %d and %d and age is %d\n", roll[p],roll[q],age[p]);
      }
    }
  }
  for(m=0;m<19;m++){
    for(n=m+1;n<20;n++){
      if(marks[m]==marks[n]){
	printf("the   roll number having same marks  are %d and %d and marks is %d \n", roll[m],roll[n], marks[m]);
      }
    }
  }
  return 0;
}

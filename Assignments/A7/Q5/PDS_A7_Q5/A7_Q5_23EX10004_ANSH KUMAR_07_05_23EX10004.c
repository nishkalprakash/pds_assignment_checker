//roll no-23EX10004
//NAME-ANSH KUMAR

#include<stdio.h>
#include<stdlib.h>
int main(){
  int p,q,m,n;
  int roll[20],age[20],marks[20];
  int arr_std[60]={roll,age,marks};
   printf("the roll no are:\n");
  for(int i=0;i<20;i++){
    printf("%d\n",roll[i]=1000+rand()%1000);
  }
  printf("the age is:\n");
   for(int j=0;j<20;j++){
    printf("%d\n",age[j]=15+rand()%10);
  }
   printf("the marks are:\n");
    for(int k=0;k<20;k++){
    printf("%d\n",marks[k]=0+rand()%100);
  }
    for(int i=0;i<20;i++){
      printf("for student %d Roll:%d  Age:%d  marks:%d\n",i+1,roll[i],age[i],marks[i]);
    }
  for(p=0;p<19;p++){
    for(q=p+1;q<20;q++){
      if(age[p]==age[q]){
	printf("the roll number having same age are %d and %d marks are %d and %d and age is %d\n", roll[p],roll[q],marks[p],marks[q],age[p]);
      }
    }
  }
  for(m=0;m<19;m++){
    for(n=m+1;n<20;n++){
      if(marks[m]==marks[n]){
	printf("the   roll number having same marks  are %d and %d ages are %d and %d and marks is %d \n", roll[m],roll[n],age[m],age[n], marks[m]);
      }
    }
  }
  return 0;
}

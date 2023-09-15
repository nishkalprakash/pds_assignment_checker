//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>
int main(){
  int roll[20],age[20],marks[20] ,stu=20,rroll,rmarks,rage,y,count=0;
  for(int i=0;i<stu;i++){
    rroll=((rand()%1000)+1000);
    roll[i]=rroll;
    rage=((rand()%10)+15);
    age[i]=rage;
    rmarks=(rand()%100);
    marks[i]=rmarks;
  }
  printf("The students which has same ages are:\n");
  for(int i=0;i<stu;i++){
    for(int j=i;j<stu;j++){
      if(age[i]==age[j] && i!=j){
	count++;
	if(count>1){
	  printf("Roll:%d  Age:%d  Marks:%d\n",roll[j],age[j],marks[j]);}
	
      }
      count=0;
    }
    
    printf("\n");
  }
  printf("..................................\n");
  
  printf("The students which has same marks are:\n");
  for(int i=0;i<stu;i++){
    for(int j=i;j<stu;j++){
      if(marks[i]==marks[j] && i!=j){
	printf("Roll:%d  Age:%d  Marks:%d\n",roll[j],age[j],marks[j]);
	printf("Roll:%d  Age:%d  Marks:%d\n",roll[i],age[i],marks[i]);
      }
    }
  }
  printf("The sorted data is:\n");
  for(int i=1;i<=stu;i++){
    for(int j=i;j<=stu;j++)
      {
	if(roll[i]<roll[i+1] && i!=j){
	  y=roll[i];
	  roll[i]=roll[i+1];
	  roll[i+1]=y;
	}
      }
    printf("%d\n",roll[i]);
  }
}
  

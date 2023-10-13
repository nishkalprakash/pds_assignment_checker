#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int roll_number[20],marks[20],age[20];
  srand(time(NULL));
  for(int i=0;i<20;i++){
    roll_number[i]=rand()%1001+1000;
    age[i]=rand()%11+15;
    marks[i]=rand()%101+0;
  }
  for(int i=0;i<20;i++){
    printf("Roll : %d   Age : %d   Mark : %d \n",roll_number[i],age[i],marks[i]);
  }
  for(int i=0;i<19;i++){
    for(int j=i+1;j<20;j++){
      if(marks[i]==marks[j]){
	printf("Roll No., Age, Marks of all the students having identical marks :\n");
	printf("Roll : %d   Age : %d   Mark : %d \n",roll_number[i],age[i],marks[i]);
        printf("Roll : %d   Age : %d   Mark : %d \n",roll_number[j],age[j],marks[j]);
      }
    }
  }
  for(int i=0;i<19;i++){
    for(int j=i+1;j<20;j++){
      if(age[i]==age[j]){
	printf("Roll No., Age, Marks of all students who are of same age:\n");
	printf("Roll : %d   Age : %d   Mark : %d\n",roll_number[i],age[i],marks[i]);
	printf("Roll : %d   Age : %d   Mark : %d\n",roll_number[j],age[j],marks[j]);
      }
    }
  }
  for(int i=0;i<19;i++){
    for(int j=i+1;j<20;j++){
      if(age[i]!=age[j]){
	printf("Roll No., Age, Marks of all students who are not of same age:\n");
	printf("Roll : %d   Age : %d   Mark : %d\n",roll_number[i],age[i],marks[i]);
	printf("Roll : %d   Age : %d   Mark : %d\n",roll_number[j],age[j],marks[j]);
      }
    }
  }
}


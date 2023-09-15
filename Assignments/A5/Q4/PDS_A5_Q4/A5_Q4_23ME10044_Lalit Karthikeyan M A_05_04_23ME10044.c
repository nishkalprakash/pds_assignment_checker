//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int marks[20], roll[20], age[20];
  int x,y,z,flag=0,temp;
  srand(time(NULL));

  for(int i=0;i<20;i++){

    x=rand()%101;
    y=rand()%1001 + 1000;
    z=rand()%11 + 15;
    marks[i]=x;
    roll[i]=y;
    age[i]=z;
  }

  //Same Age
  printf("\n\nStudents with same age:\n\n");
  for(int j=0;j<20;j++){
    for(int i=j+1; i<20;i++){
      if(age[i]==age[j]){
	printf("Roll: %d   Age: %d   Marks: %d\n",roll[i],age[i],marks[i]);
	flag=1;
      }
    }
    if(flag==1){
      printf("Roll: %d   Age: %d   Marks: %d\n",roll[j], age[j],marks[j]);
      printf("  ......................  \n");
      flag=0;
    }
  }

  //Same Marks
  printf("\n\nStudents with same Marks: \n\n");
  for(int j=0; j<20; j++){
    for(int i=0;i<20;i++){
      if(marks[i]==marks[j]){
	  printf("Roll: %d   Age: %d   Marks: %d\n",roll[i],age[i],marks[i]);
	  flag=1;
	}
    }
      if(flag==1){
	printf("Roll: %d   Age: %d   Marks: %d\n",roll[j],age[j],marks[j]);
	printf("   ......................   \n");
	flag=0;
      }
  }

  //Sorting Roll Numbers
  
  for(int i=0; i<20; i++){
    for(int j=1; j<(20-i);j++){
      if(roll[j-1]>roll[j]){
	temp=roll[j];
	roll[j]=roll[j-1];
	roll[j-1]=temp;
      }
    }
  }

  printf("\n\nSorted According To Roll Numbers:\n\n");
  for(int k=0;k<20;k++){
    printf("Roll: %d   Age: %d   Marks: %d\n",roll[k],age[k],marks[k]);
  }
  return 0;
}

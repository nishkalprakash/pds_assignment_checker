#include<stdio.h>
#include<stdlib.h>

int main(){
  int rollnumber[20];
  int marks[20];
  int age[20];
  int x,y,z,max=1000;
  int maximum[20];
  int s=0;
  
  for(int i=0;i<20;i++){
    x=rand()%1001;
      x=x+1000;
      y=rand()%11;
      y=y+15;
      z=rand()%101;	    
    rollnumber[i]=x;
      age[i]=y;
      marks[i]=z;
 
  }
  for(int j=0;j<20;j++){
    printf("roll number: %d \t age: %d \t marks: %d \n",rollnumber[j],age[j],marks[j]);
  }
  printf("the roll numbers which have same marks and thier age : \n");
  printf("\n\n");
  for(int l=0;l<20;l++){
    for(int m=l+1;m<20;m++){
      if(marks[m]==marks[l]){printf("roll number: %d \t age: %d \t  marks: %d \n",rollnumber[l],age[l],marks[l]);
	printf("roll number: %d \t age: %d \t  marks: %d \n",rollnumber[m],age[m],marks[m]);}
     
    }
  }
 
  
  return 0;
}

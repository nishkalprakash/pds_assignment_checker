//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int main(){
  int roll[20], age[20], marks[20], flag=0;
  //We will turn flag to 1 if at least 2 students have same age/marks.
  //If flag remains 0, we will print a message that no 2 have same age/marks.
  char flags[20];
  //We will make flags[i]='b' if we have found the same age/marks before
  //so that it is not printed again.
  for (int i=0; i<20; i++){
    roll[i]=rand()%1001+1000;
    age[i]=rand()%11+15;
    marks[i]=rand()%101;
    flags[i]='a';
  }
  //Part a
  printf("Students with same ages:\n");
  for (int i=0; i<19; i++){
    int flag2=0;
    //flag2 will be turned 1 if >=2 students have age=age[i]
    //And then we will make those flag[j]= 'b' so that the same age is not
    //considered in further iterations
    if (flags[i]!='b'){
      for (int j=i+1; j<20; j++){
        if ( age[i] == age[j] ){
	  flag=1;
	  flag2=1;
	  break;
	}
      }
      if (flag2==1){
        printf("Roll: %4d  Age: %2d  Mark: %3d\n", roll[i],age[i],marks[i]);
	for (int j=i+1; j<20; j++){
	  if ( age[i] == age[j] ){
	    printf("Roll: %4d  Age: %2d  Mark: %3d\n", roll[j],age[j],marks[j]);
	    flags[j]='b';
	  }
	}
	printf("...............................\n");
      }
    }
  }
  if (flag==0) printf("No 2 students have same age.\n");
  printf("*******************************\n");

  //Resetting flags[] and flag for part b
  flag=0;
  for (int i=0; i<20; i++){
    flags[i]='a';
  }

  //Part b
  printf("Students with same marks:\n");
  for (int i=0; i<19; i++){
    int flag2=0;
    //flag2 will be turned 1 if >=2 students have marks=marks[i]
    //And then we will make those flag[j]= 'b' so that the same marks is not
    //considered in further iterations
    if (flags[i]!='b'){
      for (int j=i+1; j<20; j++){
        if ( marks[i] == marks[j] ){
	  flag=1;
	  flag2=1;
	  break;
	}
      }
      if (flag2==1){
        printf("Roll: %4d  Age: %2d  Mark: %3d\n", roll[i],age[i],marks[i]);
	for (int j=i+1; j<20; j++){
	  if ( marks[i] == marks[j] ){
	    printf("Roll: %4d  Age: %2d  Mark: %3d\n", roll[j],age[j],marks[j]);
	    flags[j]='b';
	  }
	}
	printf("...............................\n");
      }
    }
  }
  if (flag==0) printf("No 2 students have same marks.\n");
  printf("*******************************\n");

  //Part c
  printf("Displaying information accoring to roll no.:\n");
  for (int i=0; i<20; i++){
    int min=10000, ind=20;
    for (int j=0; j<20; j++){
      if (roll[j]<min){
	min=roll[j];
	ind=j;
      }
    }
    printf("Roll: %4d  Age: %2d  Mark: %3d\n", roll[ind],age[ind],marks[ind]);
    roll[ind]=10000;
  }
  return 0;
}

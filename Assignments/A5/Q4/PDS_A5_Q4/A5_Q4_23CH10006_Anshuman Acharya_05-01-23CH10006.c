// Name - Anshuman Acharya
// Roll No. - 23CH10006.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
  // Marks, age, and roll no. of 20 students
  int marks[20], roll[20], age[20], i, store, store1, j, flag;
  for(i = 0;i < 20;i++){
    marks[i] = rand()%100;
    age[i] = 15 +  rand()%10;
    roll[i] = 1000 + rand()%1000;
    printf("Roll No.: %d  Age: %d  Marks: %d\n",roll[i], age[i], marks[i]);
  }

  printf("\n\n");

  //Displaying according to same age.
  for(i = 0;i < 20;i++){
    for(j = i;j < 20;j++){
      if(age[i] == age[j]){
	store = age[i];
	flag = 1;
	break;
      }
      else{
	store1 = age[i];
	flag = 0;
	break;
      }
    }
    if(flag == 1){
    printf("Roll No.: %d  Age: %d  Marks: %d\n",roll[i], store, marks[i]);
    }
    else{
    printf("Roll No.: %d  Age: %d  Marks: %d\n",roll[i], store1, marks[i]);
  }
  }

  printf("\n\n");

  //Displaying acording to same marks
  for(i = 0;i < 20;i++){
    for(j = i;j < 20;j++){
      if(marks[i] == marks[j]){
	store = marks[i];
	flag = 1;
	break;
      }
      else{
	store1 = marks[i];
	flag = 0;
	break;
      }
    }
    if(flag == 1){
    printf("Roll No.: %d  Age: %d  Marks: %d\n",roll[i], age[i], store);
    }
    else{
    printf("Roll No.: %d  Age: %d  Marks: %d\n",roll[i], age[i], store1);
  }
  }

  printf("\n\n");

  

  //Displaying according to same roll number
  for(i = 0;i < 20;i++){
    for(j = i;j < 20;j++){
      if(roll[i] == roll[j]){
	store = roll[i];
	flag = 1;
	break;
      }
      else{
	store1 = roll[i];
	flag = 0;
	break;
      }
    }
    if(flag == 1){
    printf("Roll No.: %d  Age: %d  Marks: %d\n",store, age[i], marks[i]);
    }
    else{
    printf("Roll No.: %d  Age: %d  Marks: %d\n",store1, age[i], marks[i]);
  }
  }
  
  
  return 0;
	
}

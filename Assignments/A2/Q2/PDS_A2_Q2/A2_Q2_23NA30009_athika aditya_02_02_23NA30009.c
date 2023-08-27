#include<stdio.h>
int main(){
  
  int agemonth;
  int ageinyears;
  scanf("%d", &agemonth);
  printf("please enter your age in months:\n");
  ageinyears=agemonth/12;

  if (agemonth%12==0){
    printf("you are %d years old.\n", ageinyears);
  }
  else{
    printf("you are %d years old.\n",ageinyears +1);
  }

  return 0;
}
    
  

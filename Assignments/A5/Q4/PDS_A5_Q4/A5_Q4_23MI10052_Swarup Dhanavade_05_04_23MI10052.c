// swarup jayaram dhanavade
// 23MI10052

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int rn[20],age[20],marks[20];

  for(int i =0; i<20;i++){
    rn[i]= rand()% 1001 +1000;
    age[i]=rand()% 11 +15;
    marks[i] = rand()% 101;

    printf("Roll Number :%d  Age :%d Marks : %d",rn[i],age[i],marks[i]);   
  } 
  return 0;
}

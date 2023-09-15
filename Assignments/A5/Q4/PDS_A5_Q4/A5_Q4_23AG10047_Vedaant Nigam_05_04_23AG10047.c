#include <stdio.h>
#include <stdlib.h>
int main(){
  int roll[20],age[20],marks[20];
  int i;
  for(i=0;i<=19;i++){
    roll[i]=rand()%1000 + 1000;
    marks[i]=rand()%101;
  }
  for(i=0;i<=19;i++){age[i]=rand()%10+1 +15;
  } 
  int min=15,max=0;
  for(i=0;i<=19;i++){if(age[i]>max){max=age[i];}}
 do { 
  for(i=0;i<=19;i++){if(age[i]==min){printf("roll: %d age=%d marks=%d\n",roll[i],age[i],marks[i]);}
    else continue;}
  min++;
 }
 while(min<=max);
 printf("\n");
 
 int markmin=0,markmax=0;
 
  for(i=0;i<=19;i++){if(marks[i]>markmax){markmax=marks[i];}}
 do { 
  for(i=0;i<=19;i++){if(marks[i]==markmin){printf("roll: %d age=%d marks=%d\n",roll[i],age[i],marks[i]);}
    else continue;}
  markmin++;
 }
 while(markmin<=markmax);
  return 0;
}

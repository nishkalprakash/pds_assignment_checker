//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int main(){
  int roll[20],age[20],mark[20],temp;
  printf("the initial values:\n");
  for(int i=0;i<20;i++){
    roll[i]=rand() % 1001+1000;
    age[i]=rand() % 11+15;
    mark[i]=rand() % 101+0;
    printf("roll:%d  age:%d  mark:%d \n",roll[i],age[i],mark[i]);}
  printf("the values of equal marks students:\n");
  for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if(mark[i]==mark[j]){
	 printf("roll:%d  age:%d  mark:%d \n",roll[i],age[i],mark[i]);
          printf("roll:%d  age:%d  mark:%d \n",roll[j],age[j],mark[j]);}
    }
  }
   for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if(roll[j]<roll[i]){
	temp=roll[i];
	roll[i]=roll[j];
        roll[j]=temp;}
    }
   }
   printf("sorted order of values:\n");
   for(int i=0;i<20;i++){
      printf("roll:%d  age:%d  mark:%d \n",roll[i],age[i],mark[i]);}
   return 0;
}

  

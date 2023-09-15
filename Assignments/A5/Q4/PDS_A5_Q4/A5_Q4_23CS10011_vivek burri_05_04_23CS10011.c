// roll no 23CS10011
// name vivek
#include<stdio.h>
#include<stdlib.h>
int main(){
  int roll[20],age[20],mark[20],j,i;
  for(int i=0;i<20;i++){
    roll[i]=(rand()%1001)+1000;
    age[i]=(rand()%11)+15;
    mark[i]=rand()%101;
  }
  printf("data for same age\n");
  for(int i=0;i<20;i++){
    for(j=0;j<20;j++){
      if (j!=i){
	if (age[i]==age[j]){
	  printf("\n Roll : %d Age :%d Mark : %d\n",roll[i],age[i],mark[i]);
	   printf("\n Roll : %d Age :%d Mark : %d\n",roll[j],age[j],mark[j]);
	}
      }
    }
  }
  printf("data for same marks"); 
  for(int i=0;i<20;i++){
    for(j=0;j<20;j++){
      if (j!=i){
	if (mark[i]==mark[j]){
	  printf("\n Roll : %d Age :%d Mark : %d\n",roll[i],age[i],mark[i]);
	   printf("\n Roll : %d Age :%d Mark : %d\n",roll[j],age[j],mark[j]);
	}
      }
    }
  }
  printf("data\n");
  for(i=0;i<20;i++)
    printf("\n roll: %d Age: %d Mark : %d\n",roll[i],age[i],mark[i]);
  return 0;
}
  
	  

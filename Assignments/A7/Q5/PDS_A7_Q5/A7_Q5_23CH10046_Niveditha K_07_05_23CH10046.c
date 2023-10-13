#include <stdio.h>
#include <stdlib.h>


int main(){

  int roll[20],age[20],mark[20];
  int size = 20; 
  for(int i=0; i<size; i++){ 
    printf("Roll %d: ",i+1);
    scanf("%d",&roll[i]);
    printf("Age %d: ",i+1);
    scanf("%d",&age[i]);
    printf("Marks %d: ",i+1);
    scanf("%d",&mark[i]);
    printf("\n\n");
  }
  
 printf("Random:\n");
  int randroll[20],randage[20],randmark[20];
  for(int i=0; i<size; i++){ 
    randroll[i] = rand()%1001 + 1000;
    randage[i] = rand()%11 + 15;
    randmark[i] = rand()%101;
  }
  for(int i=0; i<size; i++){ 
    printf("Roll: %d\t",randroll[i]);
    printf("Age: %d\t",randage[i]);
    printf("Mark: %d\n",randmark[i]);
  }
  printf("\n\n");
  
 printf("\nSame age:\n");
  for(int i=0; i<size; i++){ 
    for(int j=i+1; j<size; j++){ 
      if(age[i] == randage[j]){
	printf("Roll: %d\t Age:%d\t Mark:%d\n",roll[i],age[i],mark[i]);
	printf("Roll: %d\t Age:%d\t Mark:%d\n\n",randroll[j],randage[j],randmark[j]);
      }
      if(age[i] == age[j] && i!=j){
	printf("Roll: %d\t Age:%d\t Mark:%d\n",roll[i],age[i],mark[i]);
	printf("Roll: %d\t Age:%d\t Mark:%d\n",roll[j],age[j],mark[j]);
      }
    }
  }
  
 printf("\nSame mark:\n");
  for(int i=0; i<size; i++){ 
    for(int j=i+1; j<size; j++){
      if(mark[i] == randmark[j]){
	printf("Roll: %d\t Age:%d\t Mark:%d\n",roll[i],age[i],mark[i]);
	printf("Roll: %d\t Age:%d\t Mark:%d\n\n",randroll[j],randage[j],randmark[j]);
      }
       if(mark[i] == mark[j] && i!=j){
	printf("Roll: %d\t Age:%d\t Mark:%d\n",roll[i],age[i],mark[i]);
	printf("Roll: %d\t Age:%d\t Mark:%d\n",roll[j],age[j],mark[j]);
      }
    }
  }
  
 printf("\nSorted\n");
 int sort[20],sage[20],smark[20];
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(roll[j]<roll[i]){
	sort[i] = roll[j];
	sage[i] = age[j];
	smark[i] = mark[j];
      }
    }
  }
  for(int i=0; i<size; i++){
      printf("Roll: %d\tAge:%d\tMark:%d\n",sort[i],sage[i],smark[i]);
  }
  return 0;
}

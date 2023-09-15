//Name: Shobhit kumar
//Roll no: 23HS10050

#include<stdlib.h>
#include<stdio.h>

int main(){
  int n,roll[20],age[20],mark[20];
  for(int i=0;i<20;i++){
    printf("Enter the roll no of student %d:\n",i+1);
    scanf("%d",&roll[i]);

    printf("Enter the age of student %d:\n",i+1);
    scanf("%d",&age[i]);

    printf("Enter the mark of student %d:\n",i+1);
    scanf("%d",&mark[i]);
  }
  for(i=0,i<20,i++){
    printf("Roll:%d   Age:%d   Mark:%d\n",roll[i],age[i],mark[i]);
  }
  for(int i=0,i<20,i++){
    for(int j=i+1,i<20,j++){
      if(mark[i]==mark[j]){
	printf("Roll:%d   Age:%d   Mark:%d\n",roll[i],age[i],mark[i]);
      }
    }
    return 0
  }
  
    

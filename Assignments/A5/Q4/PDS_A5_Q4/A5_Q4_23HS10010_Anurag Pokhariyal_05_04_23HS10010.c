// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int roll[20],age[20],marks[20];
  for (int = 0;i<20;i++){
    roll[i]= rand()%1001 +1000;
    age[i]= rand()%11 + 15;
    marks[i] = rand()%101;
  }
  for (int i = 0; i < 20;i++){
    int temproll,tempage,tempmarks;
    for (int j = 0; j<20;j++){
      if (age[j]>age[j+1]){
	temproll=roll[j];
	roll[j]=roll[j+1];
	roll[j+1]=temproll;
	tempage = age[j];
	age[j]= age[j+1];
	tempmarks = marks[j];
	marks[j]=
	
      }
    }
  }
  


    

  return 0;
}

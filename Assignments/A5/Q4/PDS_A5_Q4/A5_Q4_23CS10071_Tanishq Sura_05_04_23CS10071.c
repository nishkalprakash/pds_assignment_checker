//tanishq sura
//23CS10071

#include<stdio.h>
#include<stdlib.h>

int main(){
  int roll[20],age[20],marks[20],x[20];
  int l=0;
  for(int i=0;i<20;i++){
    roll[i]=rand()%1001+1000;
    age[i]=rand()%11+15;
    marks[i]=rand()%101;
    x[i]=1;
  }
  printf("same age:\n");
  for(int i=0;i<20;i++){
    if(x[i]!=0){
      l=0;
      for(int j=i+1;j<20;j++){
	if(age[i]==age[j]){
	  l=1;
	  break;
	}
      }
      if(l==1){
	printf("Roll:%d , Age:%d ,Marks:%d\n",roll[i],age[i],marks[i]);
	for(int j=i+1;j<20;j++){
	  if(age[i]==age[j]){
	    printf("Roll:%d , Age:%d ,Marks:%d\n",roll[j],age[j],marks[j]);
	    x[j]=0;
	  }
	}
	printf("************************\n");
      }
    }

  }
  // same marks start
  for(int i=0;i<20;i++)
    x[i]=1;
  printf("\n\nsame marks:\n");
  
  for(int i=0;i<20;i++){
    if(x[i]!=0){
      l=0;
      for(int j=i+1;j<20;j++){
	if(marks[i]==marks[j]){
	  l=1;
	  break;
	}
      }
      if(l==1){
	printf("Roll:%d , Age:%d ,Marks:%d\n",roll[i],age[i],marks[i]);
	for(int j=i+1;j<20;j++){
	  if(marks[i]==marks[j]){
	    printf("Roll:%d , Age:%d ,Marks:%d\n",roll[j],age[j],marks[j]);
	    x[j]=0;
	  }
	}
	printf("************************\n");
      }
    }

  }

  //sort start
  int minroll=2500,imin;

  for(int j=0;j<20;j++){
   for(int i=0;i<20;i++){
    if(minroll>roll[i]){
      minroll=roll[i];
      imin=i;
     }
   }
    printf("Roll:%d , Age:%d ,Marks:%d\n",roll[imin],age[imin],marks[imin]);
    roll[imin]=2500;
    minroll=2500;
  }
  return 0;
}

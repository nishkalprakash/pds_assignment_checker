//Name:Adarsh Singh
//Roll No.:23GG10001
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,temp,uppermarks=100,lowermarks=0,upperroll=2000,lowerroll=1000,upperage=25,lowerage=15,mark[20],roll[20],age[20];
  for(i=0;i<20;i++){
    mark[i]=(rand()%(uppermarks-lowermarks+1))+lowermarks;
  }
  for(i=0;i<20;i++){
    roll[i]=(rand()%(upperroll-lowerroll+1))+lowerroll;
  }
  for(i=0;i<20;i++){
    age[i]=(rand()%(upperage-lowerage+1))+lowerage;
  }
  printf("for students having same age:\n");
  for(i=0;i<20;i++){
    for(j=i+1;j<20;j++){
      if(age[i]==age[j]){
	printf("Roll:%d Age:%d Mark:%d\n",roll[i],age[i],mark[i]);
	printf("Roll:%d Age:%d Mark:%d\n\n",roll[j],age[j],mark[j]);
      }
    }
  }
  printf("for students having identical marks:\n");
  for(i=0;i<20;i++){
    for(j=i+1;j<20;j++){
      if(mark[i]==mark[j]){
	printf("Roll:%d Age:%d Mark:%d\n",roll[i],age[i],mark[i]);
	printf("Roll:%d Age:%d Mark:%d\n\n",roll[j],age[j],mark[j]);
      }
    }
  }
  for(i=0;i<20;i++){
    for(j=i+1;j<20;j++){
      if(roll[j]<roll[i]){
	temp=roll[i];
	roll[i]=roll[j];
	roll[j]=temp;
      }
    }
  }
  printf("\nStudent details after sorting:\n");
  for(i=0;i<20;i++){
    if(i%2==0){
      printf("Roll:%d Age:%d Mark:%d\n",roll[i],age[i],mark[i]);
      printf("Roll:%d Age:%d Mark:%d\n\n",roll[i+1],age[i+1],mark[i+1]);
    }  
  }  
  return 0;
}

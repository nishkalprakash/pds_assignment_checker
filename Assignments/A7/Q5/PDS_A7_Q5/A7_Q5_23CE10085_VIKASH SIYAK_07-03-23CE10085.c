#include<stdio.h>
#include<stdlib.h>
int r[20],a[20],m[20];
int i,j,temproll,tempage,tempmarks;
int main(){
  for(i=0;i<20;i++){
    a[i]=rand()%16+10;
    r[i]=rand()%1001+1000;
    m[i]=rand()%100;
  }
}
//a part

void agesame(){
  for(i=0;i<19;i++){
    for(j=i+1;j<20;j++){
      if(a[i]=a[j]){
	printf("roll:r[%d] age:a[%d] mark:m[%d]",i,i,i);
	printf("roll:r[%d] age:a[%d] mark:m[%d]",j,j,j);
      }
    }
  }
}
//b part

void marksame(){
  for(i=0;i<19;i++){
    for(j=i+1;j<20;j++){
      if(m[i]=m[j]){
	printf("roll:r[%d] age:a[%d] mark:m[%d]",i,i,i);
	printf("roll:r[%d] age:a[%d] mark:m[%d]",j,j,j);
      }
    }
  }
}
//c part
void sort(){
  for(i=0;i<19;i++){
    for(j=i+1;j<20;j++){
      if(r[i]=r[j]){
	temproll=r[i];
	r[i]=r[j];
	r[j]=temproll;
      }
    }
  }
  for(i=0;i<19;i++){
    for(j=i+1;j<20;j++){
      if(a[i]=a[j]){
	tempage=a[i];
	a[i]=a[j];
	a[j]=tempage;
      }
    }
  }
  for(i=0;i<19;i++){
    for(j=i+1;j<20;j++){
      if(r[i]=r[j]){
	tempmarks=m[i];
	m[i]=m[j];
	m[j]=tempmarks;
      }
    }
  }
}




	


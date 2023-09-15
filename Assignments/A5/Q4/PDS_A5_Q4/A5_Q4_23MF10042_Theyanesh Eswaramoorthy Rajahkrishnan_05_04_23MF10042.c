//Roll No:23MF10042
//NAME:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int roll[20],age[20],marks[20],r,a,m;
  for(int i=0;i<20;i++){
    roll[i]=(rand() % 1000)+1000;
    age[i]=(rand() % 10)+15;
    marks[i]=(rand() % 100);
  }
  printf("Same age:\n");
  for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if (age[i]==age[j]){
	printf("Roll %d Age %d Mark %d \nRoll %d Age %d Mark %d\n***\n",roll[i],age[i],marks[i],roll[j],age[j],marks[j]);}}
  printf("Same marks:\n");
  for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if (marks[i]==marks[j])
	printf("Roll %d Age %d Mark %d \nRoll %d Age %d Mark %d\n***\n",roll[i],age[i],marks[i],roll[j],age[j],marks[j]);}}
  for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
      if(roll[j]>roll[j+1]){
	r=roll[j];
	roll[j]=roll[j+1];
	roll[j+1]=r;
	}}}
  printf("Sorted Array:\n");
  for(int k=0;k<20;k++)
    printf("Roll:%d Age:%d Mark:%d\n",roll[k],age[k],marks[k]);
  return 0;
  }}
  
	
	
  
  

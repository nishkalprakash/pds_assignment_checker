//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int main(){
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],j=0,k=0,m=0,l=0,p=0,q=0;
  for(int i=0;i<10;i++){
    a1[i]=rand() % 10+21;
    printf("a1[%d]=%d",i,a1[i]);}
  printf("\n");
  for(int i=0;i<10;i++){
    a2[i]=rand() % 30+31;
    printf("a2[%d]=%d",i,a2[i]);}
  printf("\n");
  for(int i=0;i<10;i++){
    a3[i]=rand() % 60+31;
    printf("a3[%d]=%d",i,a3[i]);}
  printf("\n");
  for(int i=0;i<10;i++){
    a4[i]=rand() % 90+31;
    printf("a4[%d]=%d",i,a4[i]);}
  printf("\n");
  for(int i=0;i<20;i++){
    if(i%2==0){
      a5[i]=a1[j];
      j++;}
    else{
      a5[i]=a2[k];
      k++;}
  }
  for(int i=0;i<10;i++){
    printf("a1[%d]=%d",i,a1[i]);}
  printf("\n");
  for(int i=0;i<10;i++){
    printf("a2[%d]=%d",i,a2[i]);}
  printf("\n");
  for(int i=0;i<20;i++){
    printf("a5[%d]=%d",i,a5[i]);}
  printf("\n");
  for(int i=0;i<20;i++){
    if(i%2==0){
      a6[i]=a3[9-m];
      m++;}
    else{
      a6[i]=a4[l];
      l++;}
  }
  for(int i=0;i<10;i++){
    printf("a3[%d]=%d",i,a3[i]);}
  printf("\n");
  for(int i=0;i<10;i++){
    printf("a4[%d]=%d",i,a4[i]);}
  printf("\n");
  for(int i=0;i<20;i++){
    printf("a6[%d]=%d",i,a6[i]);}
  printf("\n");
  for(int i=0;i<40;i++){
    if(i%2==0){
      a7[i]=a5[19-p];
      p++;}
    else{
      a7[i]=a6[19-q];
      q++;}
  }
  for(int i=0;i<20;i++){
    printf("a5[%d]=%d",i,a5[i]);}
  printf("\n");
  for(int i=0;i<20;i++){
    printf("a6[%d]=%d",i,a6[i]);}
  printf("\n");
  for(int i=0;i<40;i++){
    printf("a7[%d]=%d",i,a7[i]);}
  return 0;
}
      
    
  
    


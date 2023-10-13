//roll no; 23EC10046
//name; mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int dist[5][5];
int dist2city(){
  printf("enter two letters from a to e");
  char q=getchar();
  char p=getchar();
  int k,l;
  if(q='a') k=0;
  if(q='b') k=1;
  if(q='c') k=2;
  if(q='d') k=3;
  if(q='e') k=4;
  if(p='a') l=0;
  if(p='b') l=1;
  if(p='c') l=2;
  if(p='d') l=3;
  if(p='e') l=4;
  if(dist[k][l]>0){
   printf("the distance between %c and %c= %d",p,q,dist[k][l]);}
  else {
    printf("interconnected cities");}
}
int distthr1city(){
  printf("enter two letters from a to e");
  char q=getchar();
  char p=getchar();
  int k,l,g,sum;
  if(q='a') k=0;
  if(q='b') k=1;
  if(q='c') k=2;
  if(q='d') k=3;
  if(q='e') k=4;
  if(p='a') l=0;
  if(p='b') l=1;
  if(p='c') l=2;
  if(p='d') l=3;
  if(p='e') l=4;
  int min=100000;
  for(int i=0;i<5;i++){
    if(dist[k][i]>0&&dist[i][l]>0){
      sum=dist[k][i]+dist[i][l];
      printf("distance from %c to %c via %d=%d",p,q,i,sum);}
    else {
      printf("from %c to %c via %d is unreachable",p,q,i);}
    if(sum<min){
      min=sum; int g=i;}}
  printf("minimum distance from %c to %c is via %d and is %d",p,q,g,min);}


int main(){
  printf("A=0");
  printf("B=1");
  printf("C=2");
  printf("D=3");
  printf("E=4");
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(j>i) dist[i][j]=rand() % 980+20;
      dist[j][i]=dist[i][j];}}
  for(int i=0;i<5;i++){
    dist[i][i]=0;}
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(j>i){
	if(dist[i][j]>0){
	  printf("distance between %d and %d=%d",i,j,dist[i][j]);}
        else {
	  printf("interconnected cities");}}}}
  dist2city();
  distthr1city();
  return 0;
}

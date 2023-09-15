//name: pilli asish chandan
//r no: 23ME30039

#include<stdio.h>
#include<stdlib.h>

int main() {
  int max=50;
  int a;
  printf("enter the required elements in space");
  scanf("%d",&a);
  if(a>0 && a<51) {

  int space[a];
  int i,temp,j;
    printf("the number space taken is \n");
    for (i=0;i<a;i++) {
      space[i]=(rand()%91+10);
      
      printf("%d,",space[i]);
    }
    for(j=0;j<(a-2);j=j+2) {
      if(space[j]>space[j+2]) {
	temp=space[j];
	space[j]=space[j+2];
	space[j+2]=temp;
      }}
    printf("new space is \n");
    for (i=0;i<a;i++) {
      
      
      printf("%d,",space[i]);}}
    else 
printf("re-run the code then enter value between 1 and 50");
}
    
  

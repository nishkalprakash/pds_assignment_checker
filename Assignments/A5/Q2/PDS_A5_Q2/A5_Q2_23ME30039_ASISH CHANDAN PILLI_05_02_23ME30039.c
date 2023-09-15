//name: pilli asish chandan
//r no: 23ME30039

#include<stdio.h>
#include<stdlib.h>

int main() {
  int max=50;
  int s;
  printf("enter the required elements in space");
  scanf("%d",&s);
  if(s>0 && s<51) { 
  int space[s];
  int i,j,k,a,b,c;
    printf("the number space taken is \n");
    for (i=0;i<s;i++) {
      space[i]=(rand()%41+10);
      
      printf("%d,",space[i]);
    }
    for(i=0;i<s;i++) {
      a=space[i];
      for(j=1;j<(s-1);j++) {
	b=space[j];
	for(k=2;k<(s-2);k++) {
	c=space[k];
	if(a+b+c==60) {
	  printf("triplet found for indices %d %d %d having values %d %d %d\n",i,j,k,space[i],space[j],space[k]);}}}}
    }
    else 
printf("re-run the code then enter value between 1 and 50");
}
	
	
      

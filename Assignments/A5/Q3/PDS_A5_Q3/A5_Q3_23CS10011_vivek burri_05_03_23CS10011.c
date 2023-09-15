// roll no 23CS10011
// name vivek
#include<stdio.h>
#include<stdlib.h>
int main(){
  unsigned int roll[10],b,a,k,i;
  float CGPA[10];
  printf("enter no of students");
  scanf("%d",&k);
  for(int i=0;i<k;i++){
    printf("enter roll number and cgpa\n");// enter roll no and cgpa
     scanf("%u\n%f",&roll[i],&CGPA[i]);
  }
  for(int i=0;i<k;i++){ 
    printf("%u\t%f\n",roll[i],CGPA[i]);
   
  }
  
  for(i=0;i<k;i++){
    b+=CGPA[i];}
  i=0,a=0;
  for(i=0;i<k;i++){
      for(a=0;a<k;a++){
	if (a!=i){
	  {if((int)(CGPA[i]*100)==(int)(CGPA[a]*100))
	    printf(" %u and %u are having same cgpa that is %f and %f\n",roll[i],roll[a],CGPA[i],CGPA[a]);
	}}}}
  printf(" the average of cgp is %f",(float)(b)/k);// used type cast here
  return 0;}
	    
      	
    

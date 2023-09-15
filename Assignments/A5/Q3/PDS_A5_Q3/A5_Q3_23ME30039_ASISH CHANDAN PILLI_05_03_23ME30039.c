//name: pilli asish chandan
//r no: 23ME30039

#include<stdio.h>
#include<stdlib.h>

int main() {
  int max=10;
  int i,j,a,k,l,m;
  float sum=0.0;
  printf("enter total number of students");
  scanf("%d",&a);
  if(a<11 && a>0){
    unsigned int roll_number[a];
    float cgpa[a];
   
    for(i=0,j=0;i<a,j<a;i++,j++){
      printf(" enter roll number followed by cgpa\n");
      scanf("%u%f", &roll_number[i],&cgpa[j]);
    }
    for(i,j=0;i<a,j<a;i++,j++){
      printf(" roll number : %u cgpa %f \n",roll_number[i],cgpa[j]);}
    for(k=0;k<a;k++){
    
      sum=sum+cgpa[k];
    }
    
    printf("average cgpa is %f",sum/a);

    for(l=0;l<a;l++){
	int b=cgpa[l];
	for(m=1;m<(a-1);m++) {
	  int c=cgpa[m];
	  if((b-c)<(0.01) || (c-b)<(0.01)) {
	    printf(" students %u %u have same cgpa of %f \n", roll_number[l],roll_number[m],cgpa[l]);}}}
  }
  
      else
	printf("maximum students allowed is 10 and not less than 1,try again");
}
      


//ESLAVATH NAVEEN
//ROLL NO.:23MI31012

#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,j,k,l,m,age[20],roll[20],mark[20],min=0;
  for(i=0;i<20;i++){
    roll[i]=(rand()%(2000-1000)+1000)+1;
    age[i]=(rand()%(25-15)+15)+1;
    mark[i]=(rand()%100)+1;
  }
  
    printf("the roll,age and marks of all students having same age.\n");
    for(j=0;j<20;j++){
       printf("For age: %d \n",age[j]);
     for(k=j;k<20;k++){
      if(age[k]==age[j]){
	printf(">>>> Roll:%d age:%d Marks:%d\n",roll[k],age[k],mark[k]);
      }
     }
     printf("\n");
    }
    printf("the roll,age and marks of all students having same marks.\n");
     for(l=0;l<20;l++){
       printf("For marks: %d \n",mark[l]);
      for(m=l;m<20;m++){
       if(mark[m]==mark[l]){
	 printf(">>>> Roll:%d Age:%d marks:%d\n",roll[m],age[m],mark[m]);
       }
      }
      printf("\n");
     }
     printf("sort the students acc. to their roll no. ");
     for(i=0;i<20;i++){
       for(j=0;j<19;j++){
	 if(roll[j]>roll[j+1]){
	   roll[j+1]=roll[j];
	   roll[j]=roll[j+1];
	   printf("Roll:%d age:%d Marks:%d\n",roll[j],age[j],mark[j]);
	 }
       }
     }
  return 0;
}
      

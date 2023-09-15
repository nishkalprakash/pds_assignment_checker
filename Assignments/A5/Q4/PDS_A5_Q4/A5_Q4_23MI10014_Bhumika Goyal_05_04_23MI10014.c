//Bhumika Goyal
//23MI10014

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
  int rn[20],age[20],marks[20];
  for(int i=0;i<20;i++){
  rn[i]=rand()%(1000 +1)+1000;
  age[i]=rand()%(10+1)+15;
  marks[i]=rand()%(100+1)+0;
  }

  // for(int i=0;i<20;i++){
  // printf(" Roll:%d Age:%d Mark:%d\n",rn[i],age[i],marks[i]);    
  // }
  printf("printing the details of the students who have equal age\n");
    for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if(age[i]==age[j]){
	printf(" Roll:%d Age:%d Mark:%d\n",rn[i],age[i],marks[i]);
	printf(" Roll:%d Age:%d Mark:%d\n\n",rn[j],age[j],marks[j]);
      }
      
    }
    }
    printf("Print the details of the students who have same marks\n");
    for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if(marks[i]==marks[j]){
	printf(" Roll:%d Age:%d Mark:%d\n",rn[i],age[i],marks[i]);
	printf(" Roll:%d Age:%d Mark:%d\n",rn[j],age[j],marks[j]);
      }
    }
    }
     printf("Print the details of the students nicely formatted.\n");
    for (int i=1000;i<=2000;i++){
      for(int j=0;j<20;j++){
	if(i==rn[j]){
	  printf(" Roll:%d Age:%d Mark:%d\n",rn[j],age[j],marks[j]);

	}
	}
      }
      

    
  return 0;
}
	
  

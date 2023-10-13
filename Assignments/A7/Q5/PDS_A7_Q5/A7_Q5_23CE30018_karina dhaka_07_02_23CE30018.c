#include<stdio.h>
#include<stdlib.h>
int main()
{
  int rollno[20],age[20],marks[20];
  for(int i=0;i<20;i++){
    rollno[i]=rand()%1001+1000;
    age[i]=rand()%11+15;
    marks[i]=rand()%101;
  }
  for(int i=0;i<20;i++){
    printf("Roll:%d  Age:%d  Marks:%d",rollno[i],age[i],marks[i]);
    printf("\n");
  }
    printf("\n");
  // part 2
   for(int i=0;i<20;i++){
     for(int j=i+1;j<20;j++){
       if(marks[i]==marks[j]){
	 printf("Roll:%d  Age:%d  Marks:%d",rollno[i],age[i],marks[i]);
	  printf("\n");
	 }
       else break;
     }
     }
   
     printf("\n");
    
     
     //part 3
     for(int i=0;i<20;i++){
     for(int j=i+1;j<20;j++){
       if(rollno[j]<rollno[i]){
	 int temp=rollno[i];
	 rollno[i]=rollno[j];
	 rollno[j]=temp;
       }
     }
     }
      for(int i=0;i<20;i++){
     for(int j=i+1;j<20;j++){
       if(rollno[j]<rollno[i]){
	 int ag=age[i];
	 age[i]=age[j];
	 age[j]=ag;
       }
     }
      }
       for(int i=0;i<20;i++){
     for(int j=i+1;j<20;j++){
       if(rollno[j]<rollno[i]){
	 int ma=marks[i];
	 marks[i]=marks[j];
	 marks[j]=ma;
       }
     }
       }
         for(int i=0;i<20;i++){
	  printf("Roll:%d  Age:%d  Marks:%d",rollno[i],age[i],marks[i]);
	   printf("\n");
	 }  
       
  return 0;
}

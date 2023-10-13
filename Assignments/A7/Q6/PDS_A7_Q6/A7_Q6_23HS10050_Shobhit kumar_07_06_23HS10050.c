//Roll no- 23HS10050
//Name- Shobhit kumar

#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[10],s;
  float cgp[10];
  
  printf("enter the number of students\n");
  scanf("%d",&s);

  printf("enter the roll no of students\n");

  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }

  printf("enter the cgpa of students(max10)\n");

  for(int i=0;i<s;i++){
    scanf("%f",&cgp[i]);
  }

  printf("Display of student rollno and data\n");

  for(int i=0;i<s;i++){
    printf("rollno:%d  cgpa:%f\n",arr[i],cgp[i]);
  }

  printf("average of cgpa:");

  int sum=0;
  float avg=0;

  for(int i=0;i<s;i++){
    sum+=cgp[i];
    avg=sum/s;    
  }
  printf("%f",avg);
  for(int i=0;i<s;i++){
     for(int j=i+1;i<s;j++){
       if(cgp[i]==cgp[j]){
	 printf("roll:%d  cgpa:%f\n",arr[i],cgp[i]);
	 printf("roll:%d  cgpa:%f\n",arr[j],cgp[j]);
       }
     }
  }

  return 0;
}

		
       
     
  
   
  
  




  
  
  

//Bhumika Goyal
//23MI10014

#include<stdio.h>

int main(){
  unsigned int rn[10];
   float cg[10];
  int n;
  printf("enter n:\n");
  scanf("%d",&n);
  
   printf("enter roll number");

  for (int i=0;i<n;i++){
   
    scanf("%d",&rn[i]);
  }

  printf("enter cgpa");

  for (int i=0;i<n;i++){
   
    scanf("%f",&cg[i]);
  }
  //a.display the details read,nicely formatted
  printf("\n");

  for(int i=0;i<n;i++){
    printf("roll number:%d cgpa:%f\n ",rn[i],cg[i]);
  }
  //b. display the average CGPA of the students.

  float avgcg;
  float sum=0;

  for(int i=0; i<n; i++){
    sum=sum+cg[i];
  }
  avgcg=sum/n;
  printf("average CGPA : %.2f\n",avgcg);
  
  //c.display the roll numbers and cgpa of all students identocal cgpa of all students having identical cgpa
  
  for(int i=0;i<n;i++){
    int j;
    
 
      for(j=i;j<n;j++){
	 if(cg[i]==cg[j]){
	
       printf("roll number:%d cgpa:%f\n",rn[j],cg[j]);
	 }
      }
    
    
  }
  return 0;
}
	
   
    
  
  
  
  
    
      

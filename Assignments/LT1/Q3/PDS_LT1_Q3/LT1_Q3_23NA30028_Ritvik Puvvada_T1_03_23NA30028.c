//Name:Ritvik Puvvada
//Roll No: 23NA30028

#include<stdio.h>
int main(){
  int n,s,i,j;
  printf("Enter the scale factor:");
  scanf("%d",&s);
  printf("Enter the number of rows:");
  scanf("%d",&n);

  if(s<3 && s>6) printf("Invalid input");

  for(i=0;i<n+1;i++){
    for(j=0;j<i;j++){
      printf("%d",j+1);
    }
    printf("\n");
  }
  return 0;
}

  

   
    

  

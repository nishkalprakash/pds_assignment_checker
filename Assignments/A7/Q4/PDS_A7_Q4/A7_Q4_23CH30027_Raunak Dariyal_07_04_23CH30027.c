//question_4
//23CH30027

#include<stdio.h>
#include<stdlib.h>
int main() {
  int n;
  int a[50];
  
  printf("enter the amount of numbers to be generated : ");
  scanf("%d", &n);
  if (n>50){
    printf("invalid number. ");
    return 0;
  }
    
//filling the array with random numbers
  for(int i = 0; i<n; i++){
    a[i] = 10+rand()%40;
}

//printing the array generated
  for(int i=0; i<n; i++){
    printf(" %d", a[i]);
 }
  
  
  for(int i=0; i<n; i++){
    if (a[i]+a[i+1]+a[i+2] ==  60){
      printf("%d %d %d",a[i],a[i+1],a[i+2]);
    }
    printf("\n");
	   
  }
  return 0;
}

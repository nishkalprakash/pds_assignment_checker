//raunak_dariyal
//23CH30027
//set_2_Q1

#include<stdio.h>
int main ()
{
  int num, a;
  printf("enter any number between 1 to 9 \n");
  scanf("%d", &num);

  for(int i = 1; i <= num; i++){
    for(int j = 1; j <= i; j++){
      a = i; 
      printf("%d", a);
      
    }
    printf("\n");
  }

  return 0;

}

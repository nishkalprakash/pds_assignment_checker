//Name: Kushagra Poonia
//Roll: 23EE10036

#include <stdio.h>

int main(){
  int s = 0, n = 0;
  int pr = 0;

  printf("Enter scale factor: ");
  scanf("%d", &s);
  printf("Enter number of lines: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    for(int j = 0; j<i; j++){
      if(pr < 3+s){
	pr++;
      }
      else{
	pr=1;
      }
      printf("%d",pr);
    }
    printf("\n");
  }
}

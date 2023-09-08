// Roll no - 23NA10036

//Rishab Yadav

#include <stdio.h>

int main (){

  int num = 0;
  int n, p;
  int k = 0, l = 0;

  do{
    printf("Enter a single digit number.\n");
    scanf("%d", &n);

    num = num * 10 + n;

    if(num%10 == 5){
      k = 1;
      printf("Enter a single digit number.\n");
      scanf("%d", &p);
      if(p == 1){
	l = 1;
      }
    }

    if(k == 1 && l == 1 && num%10 == 7){
      printf("Pattern found!\n");
    }
    
  }while(n>=0);

  return 0;

}

//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int a,b=0,c=0,d=0;
  //b is the previously enterred int, c is the int enterred before b and
  //d is the int enterred before c.
  while (1){
    printf("Enter number: ");
    scanf("%d", &a);
    if (d==5 && c==1 & a==7){
      printf("pattern found\n");
      return 0;  //To terminate the code
    }
    d=c;
    c=b;
    b=a;
  }
  return 0;
}


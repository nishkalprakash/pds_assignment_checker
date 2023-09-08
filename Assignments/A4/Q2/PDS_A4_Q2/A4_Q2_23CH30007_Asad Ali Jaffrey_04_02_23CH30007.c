//Roll NO.- 23CH30007
//Name-Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

int main() {
  int i,n,max=0;
  for (i=1;i<=20;i++) {
    n = rand()%100+1;
    printf("%d\n", n);
    if (n>max) {
      max = n;
      }
  }
    printf("The maximum number is %d\n",max);
  return 0;
}

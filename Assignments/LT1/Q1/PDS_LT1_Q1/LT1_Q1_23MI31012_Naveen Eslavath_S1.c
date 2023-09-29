//Roll No.:23MI31012
//Name:ESLAVATH NAVEEN
//SET:2

#include <stdio.h>
int main(){
  int i,j,n;
  printf("Enter a number between 1 and 9: ");
  scanf("%d\n",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++);
      printf("%d\n",n);
  }
  return 0;
}

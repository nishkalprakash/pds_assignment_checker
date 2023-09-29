//Roll no.:23CH10046
//Name: Niveditha K

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("How many random numbers to generate ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("%d", rand%100(), );
  }
  return 0;
}

//Roll No.:23CH10046
//Name:Niveditha K

#include <stdio.h>
int main()

{
  int n;
  printf("Enter an integer between 1 to 9\n");
  scanf("%d",&n);
  printf("\n");
  int i,j,k;
  for(i=1;i<=n;i++){
    for(j=1,k=i;j<=i;j++){
      printf("%d",k);
    }printf("\n");
  }
  return 0;
}

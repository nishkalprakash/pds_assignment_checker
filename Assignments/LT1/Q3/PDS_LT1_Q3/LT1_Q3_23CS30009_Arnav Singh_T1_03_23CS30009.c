//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int n, s;
  while (1){  //Data validation for s
    printf("Enter scale factor: ");
    scanf("%d", &s);
    if (s>=1 && s<=6) break;
    else printf("Wrong Input. Enter Again.\n");
  }
  while (1){  //Data validation for n
    printf("Enter number of lines: ");
    scanf("%d", &n);
    if (n>=1 && n<=10) break;
    else printf("Wrong Input. Enter Again.\n");
  }
  int num=0; //(num%(s+3))+1 is the number to be printed
  for (int i=1; i<=n; i++){    //i<=n because the number of lines=n
    for (int j=1; j<=i; j++){   //j<=i because ith line has j numbers
      printf("%d", (num%(s+3))+1);
      //Since the printed number has to be between 1 and s+3
      num++;
    }
    printf("\n");  //We have to go to next line
  }
  return 0;
}

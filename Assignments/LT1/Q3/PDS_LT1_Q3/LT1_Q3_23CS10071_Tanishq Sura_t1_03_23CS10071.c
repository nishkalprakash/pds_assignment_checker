//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int s,n,nos,var=0;
  printf("Enter scale factor: ");
  scanf("%d",&s);
  printf("Enter number of lines: ");
  scanf("%d",&n);

  nos= 3+s;                              //counts the nos that are to be printed in a cyclic fashion
  for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
      printf("%d",(var%(nos))+1);        //as the display no. exceeds s+3 we bring it back to 1 by %
      var++;
    }
    printf("\n");
  }
  return 0;
}

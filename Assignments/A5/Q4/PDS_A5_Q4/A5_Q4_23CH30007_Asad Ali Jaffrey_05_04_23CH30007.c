//Roll No.- 23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

int main() {
  int roll[20], age[20], marks[20];

  for (int i=0; i<=19; i++) {
    roll[i]=rand()%1001+1000;
    age[i]=rand()%11+15;
    marks[i]=rand()%101;
  }

  for (int i=0; i<=19; i++) {
    printf("Roll:%d Age:%d Mark:%d",roll[i], age[i], marks[i]);
    printf("\n");
  }


  return 0;
}

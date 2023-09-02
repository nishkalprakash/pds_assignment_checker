#include <stdio.h>

int main() {
  int mark;
  printf ("give your mark\n");
  scanf ("%d",&mark);
  if (mark <=100 && mark >=90) {
    printf("Ex");
  };
  if (mark <90 && mark >=80) {
    printf("A");
  };
  if (mark <80 && mark >=70) {
    printf("B");
  };
  if (mark <70 && mark >=60) {
    printf("c");
  };
  if (mark <60 && mark >=50) {
    printf("D");
  };
  if (mark <50 && mark >=35) {
    printf("P");
  };
  if (mark <35) {
    printf("F");
  }
}

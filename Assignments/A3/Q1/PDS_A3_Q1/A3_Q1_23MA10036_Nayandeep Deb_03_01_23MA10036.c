//Name Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>

int main() {
  int r1, s11, s12, s13, s14, s15, r2, s21, s22, s23, s24, s25, r3, s31, s32, s33,s34, s35, r4, s41, s42, s43, s44, s45, r5, s51, s52, s53, s54, s55; //all variables needed to store scores and roll no.
  printf("Enter details of Student 1: ");
  scanf("%d %d %d %d %d %d", &r1, &s11, &s12, &s13, &s14, &s15);
  printf("Enter details of Student 2: ");
  scanf("%d %d %d %d %d %d", &r2, &s21, &s22, &s23, &s24, &s25);
  printf("Enter details of Student 3: ");
  scanf("%d %d %d %d %d %d", &r3, &s31, &s32, &s33, &s34, &s35);
  printf("Enter details of Student 4: ");
  scanf("%d %d %d %d %d %d", &r4, &s41, &s42, &s43, &s44, &s45);
  printf("Enter details of Student 5: ");
  scanf("%d %d %d %d %d %d", &r5, &s51, &s52, &s53, &s54, &s55);

  printf("\n Tabular Display:\n");
  printf("%d  %3d %3d %3d %3d %3d\n", r1, s11, s12, s13, s14, s15);
  printf("%d  %3d %3d %3d %3d %3d\n", r2, s21, s22, s23, s24, s25);
  printf("%d  %3d %3d %3d %3d %3d\n", r3, s31, s32, s33, s34, s35);
  printf("%d  %3d %3d %3d %3d %3d\n", r4, s41, s42, s43, s44, s45);
  printf("%d  %3d %3d %3d %3d %3d\n", r5, s51, s52, s53, s54, s55);
  return 0;
}

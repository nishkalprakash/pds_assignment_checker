//Name: Aryan Raina
//Roll No.: 23MA10016


#include <stdio.h>

int main() {
  int a1, a2, a3, a4, a5, a6;
  printf("Enter details for student 1:\n");
  scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6);
  int b1, b2, b3, b4, b5, b6;
  printf("Enter details for student 2:\n");
  scanf("%d %d %d %d %d %d", &b1, &b2, &b3, &b4, &b5, &b6);
  int c1, c2, c3, c4, c5, c6;
  printf("Enter details for student 3:\n");
  scanf("%d %d %d %d %d %d", &c1, &c2, &c3, &c4, &c5, &c6);
  int d1, d2, d3, d4, d5, d6;
  printf("Enter details for student 4:\n");
  scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);
  int e1, e2, e3, e4, e5, e6;
  printf("Enter details for student 5:\n");
  scanf("%d %d %d %d %d %d", &e1, &e2, &e3, &e4, &e5, &e6);

  printf("Tabular Display:\n");
  printf("%d %3d %3d %3d %3d %3d\n", a1, a2, a3, a4, a5, a6);
  printf("%d %3d %3d %3d %3d %3d\n", b1, b2, b3, b4, b5, b6);
  printf("%d %3d %3d %3d %3d %3d\n", c1, c2, c3, c4, c5, c6);
  printf("%d %3d %3d %3d %3d %3d\n", d1, d2, d3, d4, d5, d6);
  printf("%d %3d %3d %3d %3d %3d\n", e1, e2, e3, e4, e5, e6);

  return 0;
}

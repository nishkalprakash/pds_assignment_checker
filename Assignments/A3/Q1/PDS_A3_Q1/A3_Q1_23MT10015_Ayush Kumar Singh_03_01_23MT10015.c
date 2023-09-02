#include <stdio.h>
#include <math.h>

int main(){
  int s1_roll, s1_m1, s1_m2, s1_m3, s1_m4, s1_m5;
  printf("Entre details of student 1:\n");
  scanf("%d%d%d%d%d%d",&s1_roll, &s1_m1, &s1_m2, &s1_m3, &s1_m4, &s1_m5);

  int s2_roll, s2_m1, s2_m2, s2_m3, s2_m4, s2_m5;
  printf("Entre details of student 2:\n");
  scanf("%d %d %d %d %d %d", &s2_roll, &s2_m1, &s2_m2, &s2_m3, &s2_m4, &s2_m5);

  int s3_roll, s3_m1, s3_m2, s3_m3, s3_m4, s3_m5;
  printf("Entre details of student 3:\n");
  scanf("%d %d %d %d %d %d", &s3_roll, &s3_m1, &s3_m2, &s3_m3, &s3_m4, &s3_m5);

  int s4_roll, s4_m1, s4_m2, s4_m3, s4_m4, s4_m5;
  printf("Entre details of student 4:\n");
  scanf("%d %d %d %d %d %d", &s4_roll, &s4_m1, &s4_m2, &s4_m3, &s4_m4, &s4_m5);
  int s5_roll, s5_m1, s5_m2, s5_m3, s5_m4, s5_m5;

  printf("Entre details of student 5:\n");
  scanf("%d %d %d %d %d %d", &s5_roll, &s5_m1, &s5_m2, &s5_m3, &s5_m4, &s5_m5);


  printf("Tabular Display:\n");
  printf("%d %d %d %d %d %d\n", s1_roll, s1_m1, s1_m2, s1_m3, s1_m4, s1_m5);
  printf("%d %d %d %d %d %d\n", s2_roll, s2_m1, s2_m2, s2_m3, s2_m4, s2_m5);
  printf("%d %d %d %d %d %d\n", s3_roll, s3_m1, s3_m2, s3_m3, s3_m4, s3_m5);
  printf("%d %d %d %d %d %d\n", s4_roll, s4_m1, s4_m2, s4_m3, s4_m4, s4_m5);
  printf("%d %d %d %d %d %d\n", s5_roll, s5_m1, s5_m2, s5_m3, s5_m4, s5_m5);

  return 0;
}

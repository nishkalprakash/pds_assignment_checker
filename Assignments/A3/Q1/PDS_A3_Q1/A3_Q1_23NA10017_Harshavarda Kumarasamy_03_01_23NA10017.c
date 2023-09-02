//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{
  int roll_a, mark1_a, mark2_a, mark3_a, mark4_a, mark5_a;
  int roll_b, mark1_b, mark2_b, mark3_b, mark4_b, mark5_b;
  int roll_c, mark1_c, mark2_c, mark3_c, mark4_c, mark5_c;
  int roll_d, mark1_d, mark2_d, mark3_d, mark4_d, mark5_d;
  int roll_e, mark1_e, mark2_e, mark3_e, mark4_e, mark5_e;

  printf("Enter details for student 1:\n");
  scanf("%d%d%d%d%d%d", &roll_a, &mark1_a, &mark2_a, &mark3_a, &mark4_a, &mark5_a);
  printf("Enter details for student 2:\n");
  scanf("%d%d%d%d%d%d", &roll_b, &mark1_b, &mark2_b, &mark3_b, &mark4_b, &mark5_b);
  printf("Enter details for student 3:\n");
  scanf("%d%d%d%d%d%d", &roll_c, &mark1_c, &mark2_c, &mark3_c, &mark4_c, &mark5_c);
  printf("Enter details for student 4:\n");
  scanf("%d%d%d%d%d%d", &roll_d, &mark1_d, &mark2_d, &mark3_d, &mark4_d, &mark5_d);
  printf("Enter details for student 5:\n");
  scanf("%d%d%d%d%d%d", &roll_e, &mark1_e, &mark2_e, &mark3_e, &mark4_e, &mark5_e);

  printf("Tabular Display:\n");

  printf("%d %d %d %d %d %d\n", roll_a, mark1_a, mark2_a, mark3_a, mark4_a, mark5_a);
  printf("%d %d %d %d %d %d\n", roll_b, mark1_b, mark2_b, mark3_b, mark4_b, mark5_b);
  printf("%d %d %d %d %d %d\n", roll_c, mark1_c, mark2_c, mark3_c, mark4_c, mark5_c);
  printf("%d %d %d %d %d %d\n", roll_d, mark1_d, mark2_d, mark3_d, mark4_d, mark5_d);
  printf("%d %d %d %d %d %d\n", roll_e, mark1_e, mark2_e, mark3_e, mark4_e, mark5_e);
  

  return 0;
}

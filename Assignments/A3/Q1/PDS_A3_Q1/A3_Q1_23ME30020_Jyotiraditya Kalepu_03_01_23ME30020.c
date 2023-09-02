//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int rollno1=0, m1_1=0, m1_2=0, m1_3=0, m1_4=0, m1_5=0;         // Accepting marks for student 1
  printf("Enter details for student 1:\n");
  scanf("%d %d %d %d %d %d",&rollno1,&m1_1,&m1_2,&m1_3,&m1_4,&m1_5);
  if(m1_1<0||m1_1>100||m1_2<0||m1_2>100||m1_3<0||m1_3>100||m1_4<0||m1_4>100||m1_5<0||m1_5>100){
    printf("Marks are invalid\n");    // Printing if marks are invalid
    return 0;
  }
  
  int rollno2=0, m2_1=0, m2_2=0, m2_3=0, m2_4=0, m2_5=0;        // Accepting marks for student 2
  printf("Enter details for student 2:\n");
  scanf("%d %d %d %d %d %d",&rollno2,&m2_1,&m2_2,&m2_3,&m2_4,&m2_5);
   if(m2_1<0||m2_1>100||m2_2<0||m2_2>100||m2_3<0||m2_3>100||m2_4<0||m2_4>100||m2_5<0||m2_5>100){
    printf("Marks are invalid\n");    // Printing if marks are invalid
    return 0;
  }
   
  int rollno3=0, m3_1=0, m3_2=0, m3_3=0, m3_4=0, m3_5=0;        // Accepting marks for student 3
  printf("Enter details for student 3:\n");
  scanf("%d %d %d %d %d %d",&rollno3,&m3_1,&m3_2,&m3_3,&m3_4,&m3_5);
   if(m3_1<0||m3_1>100||m3_2<0||m3_2>100||m3_3<0||m3_3>100||m3_4<0||m3_4>100||m3_5<0||m3_5>100){
    printf("Marks are invalid\n");    // Printing if marks are invalid
    return 0;
  }
   
  int rollno4=0, m4_1=0, m4_2=0, m4_3=0, m4_4=0, m4_5=0;        // Accepting marks for student 4
  printf("Enter details for student 4:\n");
  scanf("%d %d %d %d %d %d",&rollno4,&m4_1,&m4_2,&m4_3,&m4_4,&m4_5);
   if(m4_1<0||m4_1>100||m4_2<0||m4_2>100||m4_3<0||m4_3>100||m4_4<0||m4_4>100||m4_5<0||m4_5>100){
     printf("Marks are invalid\n");    // Printing if marks are invalid
     return 0;
  }
   
  int rollno5=0, m5_1=0, m5_2=0, m5_3=0, m5_4=0, m5_5=0;        // Accepting marks for student 5
  printf("Enter details for student 5:\n");
  scanf("%d %d %d %d %d %d",&rollno5,&m5_1,&m5_2,&m5_3,&m5_4,&m5_5);
   if(m5_1<0||m5_1>100||m5_2<0||m5_2>100||m5_3<0||m5_3>100||m5_4<0||m5_4>100||m5_5<0||m5_5>100){
    printf("Marks are invalid\n");    // Printing if marks are invalid
    return 0;
  }
   
   printf("TABULAR DISPLAY\n");
   printf("%d    %d   %d   %d   %d   %d\n",rollno1,m1_1,m1_2,m1_3,m1_4,m1_5);
   printf("%d    %d   %d   %d   %d   %d\n",rollno2,m2_1,m2_2,m2_3,m2_4,m2_5);
   printf("%d    %d   %d   %d   %d   %d\n",rollno3,m3_1,m3_2,m3_3,m3_4,m3_5);
   printf("%d    %d   %d   %d   %d   %d\n",rollno4,m4_1,m4_2,m4_3,m4_4,m4_5);
   printf("%d    %d   %d   %d   %d   %d\n",rollno5,m5_1,m5_2,m5_3,m5_4,m5_5);
   return 0;
}

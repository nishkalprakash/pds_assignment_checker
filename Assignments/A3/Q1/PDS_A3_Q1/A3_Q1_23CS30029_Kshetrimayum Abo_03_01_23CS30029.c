//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include <stdio.h>
int main()
{
  /* 
     Definition of variables used here
     rx : Roll No. x
     rxsy :Marks of Roll No. x in subject y 
  */
  int r1,r2,r3,r4,r5,r1s1,r1s2,r1s3,r1s4,r1s5,r2s1,r2s2,r2s3,r2s4,r2s5,r3s1,r3s2,r3s3,r3s4,r3s5,r4s1,r4s2,r4s3,r4s4,r4s5,r5s1,r5s2,r5s3,r5s4,r5s5;
  //Inputting student 1 details
  printf("Enter details for student 1: \n");
  scanf("%d%d%d%d%d%d",&r1,&r1s1,&r1s2,&r1s3,&r1s4,&r1s5);
  //Inputting student 2 details
  printf("Enter details for student 2: \n");
  scanf("%d%d%d%d%d%d",&r2,&r2s1,&r2s2,&r2s3,&r2s4,&r2s5);
    //Inputting student 3 details
  printf("Enter details for student 3: \n");
  scanf("%d%d%d%d%d%d",&r3,&r3s1,&r3s2,&r3s3,&r3s4,&r3s5);
    //Inputting student 4 details
  printf("Enter details for student 4: \n");
  scanf("%d%d%d%d%d%d",&r4,&r4s1,&r4s2,&r4s3,&r4s4,&r4s5);
  //Inputting student 5 details
  printf("Enter details for student 5: \n");
  scanf("%d%d%d%d%d%d",&r5,&r5s1,&r5s2,&r5s3,&r5s4,&r5s5);
  //Tabular Display
  printf("Tabular Display: \n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n",r1,r1s1,r1s2,r1s3,r1s4,r1s5,r2,r2s1,r2s2,r2s3,r2s4,r2s5,r3,r3s1,r3s2,r3s3,r3s4,r3s5,r4,r4s1,r4s2,r4s3,r4s4,r4s5,r5,r5s1,r5s2,r5s3,r5s4,r5s5);
  return 0;
}

//SHAURYA SINGH RAGHAW
//23AG30039

#include<stdio.h>
int main()
{
  int r1,a1,b1,c1,d1,e1,r2,a2,b2,c2,d2,e2,r3,a3,b3,c3,d3,e3,r4,a4,b4,c4,d4,e4,r5,a5,b5,c5,d5,e5;
  printf("enter the details for student 1: \n");
  scanf("%d   %d    %d    %d    %d    %d",&r1,&a1,&b1,&c1,&d1,&e1);

  printf("enter the details for student 2: \n");
  scanf("%d   %d    %d    %d    %d    %d",&r2,&a2,&b2,&c2,&d2,&e2);

  printf("enter the details for student 3: \n");
  scanf("%d   %d    %d    %d    %d    %d",&r3,&a3,&b3,&c3,&d3,&e3);


  printf("enter the details for student 4: \n");
  scanf("%d   %d    %d    %d    %d    %d",&r4,&a4,&b4,&c4,&d4,&e4);


  printf("enter the details for student 5: \n");
  scanf("%d   %d    %d    %d    %d    %d",&r5,&a5,&b5,&c5,&d5,&e5);


  if( a1>100||b1>100||c1>100||d1>100||e1>100||a2>100||b2>100||c2>100||d2>100||e2>100||a3>100||b3>100||c3>100||d3>100||e3>100||a4>100||b4>100||c4>100||d4>100||e4>100||a5>100||b5>100||c5>100|d5>100||e5>100)
    {
      printf("invalid input, marks out of hundred\n");

    }

  else
    {
  printf("TABULAR DISPLAY\n");
  printf("%d     %d      %d       %d     %d     %d\n",r1,a1,b1,c1,d1,e1);
  printf("%d     %d      %d       %d     %d     %d\n",r2,a2,b2,c2,d2,e2);
  printf("%d     %d      %d       %d     %d     %d\n",r3,a3,b3,c3,d3,e3);
  printf("%d     %d      %d       %d     %d     %d\n",r4,a4,b4,c4,d4,e4);
  printf("%d     %d      %d       %d     %d     %d\n",r5,a5,b5,c5,d5,e5);
    }
  return 0;
}

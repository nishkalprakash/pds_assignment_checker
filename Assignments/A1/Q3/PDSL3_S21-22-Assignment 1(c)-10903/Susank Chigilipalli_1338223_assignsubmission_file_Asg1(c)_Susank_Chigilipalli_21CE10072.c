/*this program is to find number of cars manufractured per day*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
  float m,k,f,num=0;
  int n,man=0;
  printf("Monday means Day 1, Tuesday means Day 2, ..., Sunday means Day 7\n");
  printf("Enter the day value\n :");
  scanf("%d",&n);
  printf("Enter number of machines available :");
  scanf("%f",&m);
  switch(n)
  {
     case 1 : printf("Number of cars manufractuerd is : %f",&m);
              break;
     case 2 : num= m+m/2 +m/4;
              man = (int)num;
              printf("Number of cars manufractuerd is : %d",&man);
              break;
     case 3 :
     case 6 : printf(" Enter number of machines kept under inspection :");
              num = (m-k)+ (m-k)/2 + (m-k)/4;
              man = (int)num;
              printf("Number of cars manufractuerd is : %d",&man);
              break;
     case 4 :
     case 5 :
     case 7 :
              printf(" Enter boosting fraction :");
              scanf("%f",&f);
              num= m + f*m;
              man + (int)num;
              printf("Number of cars manufractuerd is : %d",&man);
              break;
    }
}

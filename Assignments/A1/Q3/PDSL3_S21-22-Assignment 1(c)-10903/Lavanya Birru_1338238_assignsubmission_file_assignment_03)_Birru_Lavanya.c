#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,day,k;
    float f;
    printf("enter the day number");
    scanf("%d",&day);
    printf("enter the numbr of machines");
    scanf("%d",&m);
    switch (day)
    {
    case1 /* constant-expression */:
        /* code */
                n=m;
        printf("number of manifactured cars %d",n);
        break;
    case2:
       n=round(m+(m/2)+(m/4));
       printf("number of manifactured cars %d",n);
        break;
    case3:
       printf("enter the number of cars under inspection");
       scanf("%d",&k);
       n=round(m-k+(m-k/2)+(m-k/4));
       printf("number of manifactured cars %d",n);
        break;
    case4:
      printf("enter the boosting fraction");
      scanf("%1.2f",&f);
      n=round(m+(m*f));
      printf("number of manifactured cars is %d",n);
      break;
    case5:
    printf("enter the boosting fraction");
      scanf("%1.2f",&f);
      n=round(m+(m*f));
      printf("number of manifactured cars is %d",n);
      break;
    case6:
    printf("enter the number of cars under inspection");
       scanf("%d",&k);
       n=round(m-k+(m-k/2)+(m-k/4));
       printf("number of manifactured cars %d",n);
        break;
     case7:
        printf("enter the boosting fraction");
      scanf("%1.2f",&f);
      n=round(m+(m*f));
      printf("number of manifactured cars is %d",n);
      break;

    default:
      break;
    }
}

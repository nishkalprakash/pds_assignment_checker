#include<stdio.h>
#include<math.h>
int main()
   {
    int y,n; 
    float m,sum,d;
    printf("Enter the value of height y and the value of n");
    scanf("%d%d",&y,&n);
    if (n==1)
      printf("Total distance travelled is %d\n",y);
    else
      {
        m = pow(0.25,n);
        sum = 2*y*(1-m)/3;
        d = y+sum;
        printf("Total distance travelled is %f\n", d);
      }
    return 0;
    }

    
    

#include<stdio.h>
    int main(){
        int x, y, a, b;
        printf("Enter two numbers:");
        scanf("%d,%d", &x, &y);
        if((x>99)&&(x<999)&&(y>99)&&(y<999))
        {

            a = x/100;
            b = y/100;
            int c = (x%100) - (x%10);
            int d = (y%100) - (y%10);

                if ((a == y%10)&&(b == x%10)&&(c == d))
              printf("perfect pair");

            else
                printf("not perfect pair");
            }
      else  if((x>=10)&&(x<=99)&&(y>=10)&&(y<=99))
          {
            a = x%10;
            b = y/10;
          int  c = x/10;
          int  d = y%10;
            if((a==b)&&c==d)
                printf("perfect pair");
            else
                printf("not perfect pair");
          }
       else if((x>0)&&(x<10)&&(y>0)&&(y<10))   {
        if (x == y)
            printf("perfect pair");
        else
            printf("not perfect pair");
       }
        else if ((x<=0)&&(x<= -9)&&(y<=0)&&(y<= -9))
        {
            if (x == y)
                printf("perfect pair");
            else
                printf("not perfect pair");
        }
        return 0;

    }

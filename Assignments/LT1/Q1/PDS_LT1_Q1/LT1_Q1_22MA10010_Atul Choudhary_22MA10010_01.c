#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    float s1,s2,s3,s4,minar=99999;
    printf("enter the coordinates :");
    printf("(x1, y1)");
    scanf("%d,%d" ,&x1,&y1);
    printf("(x2, y2)\n");
    scanf("%d,%d" ,&x2,&y2);
    printf("(x3, y3)\n");
    scanf("%d,%d" ,&x3,&y3);
    printf("(x4, y4)\n");
    scanf("%d,%d" ,&x4,&y4);



     s1=(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;//s1=area of traingle 1
     s2=abs((x1*(y2-y4) - y1*(x2-x4) + 1*(x2*y4-y2*x4))/2);
     s3=abs((x1*(y3-y4) - y1*(x3-x4) + 1*(x3*y4-y3*x4))/2);
     s4=abs((x2*(y3-y4) - y2*(x3-x4) + 1*(x3*y4-y3*x4))/2);
      printf("%d\n" ,s1);
      printf("%d\n" ,s2);
      printf("%d\n" ,s3);
      printf("%d\n" ,s4);


   /*if(minar>s1)
    {
      minar=s1;
    }
   if(minar>s2)
    {
    minar=s2;
    }
   if(minar>s3)
    {
    minar=s3;
    }
   if(minar>s4)
    {
    minar=s4;
    }

  if(minar==s1) {
    printf("Points having the minimum area is (%d,%d) (%d,%d) (%d,%d)",(x1, y1), (x2, y2), (x3, y3));

    printf("area of triangle is %d\n" ,s1);

  }*/





    return 0;

}


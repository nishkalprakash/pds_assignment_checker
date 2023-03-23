#include<stdio.h>

int main()
{     int a,b;
      int s1;
      int s2;
      int s3;
      printf("enter the no /n");
      scanf("%d",&a);

      s1= (a * (a+1))/2;
      s2= (a* (a+1)*((2*a)+1))/6;
    printf("%d\n",s2);


      b=(a/10)+(a/100)+(a/1000);
      printf("the sum of the integers of s1 %d",s1);
      printf("the sum of the integers of s2 %d",s2);



    return 0;



}

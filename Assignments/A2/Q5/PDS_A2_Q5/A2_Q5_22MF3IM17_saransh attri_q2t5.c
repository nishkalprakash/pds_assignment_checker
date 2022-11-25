#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ int y,n;
printf("write the value of height from which the ball is dropped \n");
scanf("%d",&y);
printf("write the value of n");
scanf("%d",&n);
int c= y* (pow(0.25,n)-1)/0.25-1;
printf("the distance trnseversed by the ball is %d",c);
return 0;
}

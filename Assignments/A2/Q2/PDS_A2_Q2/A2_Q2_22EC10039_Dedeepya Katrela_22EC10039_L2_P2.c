#include<stdio.h>
int main()
{
    int x;
    char y;
    float z;
    printf("enter x and y:");
    scanf("%2d %c",&x,&y);
    
    printf("enter z:");
    scanf("%f",&z);

    printf("%2d %c %f",x,y,z);
  return 0;
}

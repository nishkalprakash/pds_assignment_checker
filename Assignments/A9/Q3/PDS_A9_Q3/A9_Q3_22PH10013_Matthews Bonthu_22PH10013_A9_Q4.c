// NAME BONTHU MATTHEWS 
// ROLL NO:: 22PH10013 
// SECTION 14 
// ASSIGNMENT 9, QUESTION: 4
#include <stdio.h>
struct rect
{
   int x1;
   int y1;
   int x2;
   int y2;
}re;
int main ( )
{
    scanf("%d",&re.x1);
    scanf("%d",&re.y1);
    scanf("%d",&re.x2);
    scanf("%d",&re.y2);

    int area;
    area=((re.x2)-(re.x1))*((re.y2)-(re.y1));
    printf("area is %d",area);
    return 0;
}
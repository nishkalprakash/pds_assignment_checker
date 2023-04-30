#include<stdio.h>
#include<math.h>

int main()

{
    int x1,y1,x2,y2,x3,y3,a1,a2,a3,s1,A;
    float x1,y1,x2,y2,x3,y3,a1,a2,a3,s1,A;
    printf("(x1,y1) = *");
    scanf("%d%d",&x1,&y1);
    printf("\n(x2,y2) + *");
    scanf("%d%d",&x2,&y2);
    printf("(x3,y3) = *");
    scanf("%d%d",&x3,&y3);
    printf("(x4,y4) = *");
    scanf("%d%d",&x4,&y4);
    a1 = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    a2 = sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    a3 = sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
    s1 = ((a1+a2+a3)/2);
    A = sqrt(s1*(s1-a1)*(s1-a2)*(s1-a3));

    printf("Enter the area of the smallest triangle");

    return 0


}

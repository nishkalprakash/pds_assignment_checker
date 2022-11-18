/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
#include<math.h>sqrt
int main()
{
    int x1, x2, x3, y1, y2, y3;
    float s1, s2, s3;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("point 1 = (%d,%d)\n",x1,y1);
    printf("point 2 = (%d,%d)\n",x2,y2);
    printf("point 3 = (%d,%d)\n",x3,y3);
    s1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    s2 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    s3 = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    if ((s2+s3>s1)&&(s2+s1>s3)&&(s1+s3>s2))
        {printf("it is a valid triangle\n");

if((((s1*s1)+(s2*s2))==(s3*s3))||(((s3*s3)+(s2*s2))==(s1*s1))||(((s1*s1)+(s3*s3))==(s2*s2)))
printf (" right angle triangle\n");
if((((s1*s1)+(s2*s2))<(s3*s3))||(((s3*s3)+(s2*s2))<(s1*s1))||(((s1*s1)+(s3*s3))<(s2*s2)))
printf (" acute angle triangle\n");
if((((s1*s1)+(s2*s2))>(s3*s3))||(((s3*s3)+(s2*s2))>(s1*s1))||(((s1*s1)+(s3*s3))>(s2*s2)))
printf (" obtuse angle triangle\n");}
else printf("not a valid triangle\n");

}

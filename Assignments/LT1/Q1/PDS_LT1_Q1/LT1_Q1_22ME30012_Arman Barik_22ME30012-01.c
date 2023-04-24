# include <stdio.h>
# include <math.h>
void main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4; // define 8 variables for 4 points in 2D Euclidean space. A=(x1,y1),B=(x2,y2),C=(x3,y3),D=(x4,y4).
    double a1,b1,c1,s1; // for triangle ABC a1=AB,b1=BC,c1=CA,s1=semi perimeter of triangle ABC.
    double a2,b2,c2,s2; //for triangle BCD a2=BC,b2=CD,c2=BD,s2=semi perimeter of triangle BCD.
    double a3,b3,c3,s3; //for triangle ACD a3=CD,b3=DA,c3=AC,s3=semi perimeter of triangle ACD.
    double a4,b4,c4,s4; //for triangle ABD a4=DA,b4=AB,c4=DB,s4=semi perimeter of triangle ABD.
    double area1,area2,area3,area4; // area1=area of ABC, area2=area of BCD, area3=area of ACD, area4=area of ABD,

    printf("Enter the point A: ");
    scanf("%d" "%d", &x1,&y1);
    printf("Enter the point B: ");
    scanf("%d" "%d", &x2,&y2);
    printf("Enter the point C: ");
    scanf("%d" "%d", &x3,&y3);
    printf("Enter the point D: ");
    scanf("%d" "%d", &x4,&y4);

    a1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    b1=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c1=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    s1=(a1+b1+c1)/2;
    area1=sqrt(s1*(s1-a1)*(s1-b1)*(s1-c1)); // using the Heron's formula.

    a2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    b2=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
    c2=sqrt(pow((x4-x2),2)+pow((y4-y2),2));
    s2=(a2+b2+c2)/2;
    area2=sqrt(s2*(s2-a2)*(s2-b2)*(s2-c2)); // using the Heron's formula.

    a3=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
    b3=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
    c3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    s3=(a3+b3+c3)/2;
    area3=sqrt(s3*(s3-a3)*(s3-b3)*(s3-c3)); // using the Heron's formula.

    a4=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
    b4=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    c4=sqrt(pow((x4-x2),2)+pow((y4-y2),2));
    s4=(a4+b4+c4)/2;
    area4=sqrt(s4*(s4-a4)*(s4-b4)*(s4-c4)); // using the Heron's formula.

    if((area1<=area2)&&(area1<=area3)&&(area1<=area4)) // condition for area1 to be minimum.
        {
            printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
            printf("Area= %lf", area1);
        }


    else if((area2<=area1)&&(area2<=area3)&&(area2<=area4)) // condition for area2 to be minimum.
        {
            printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",x2,y2,x3,y3,x4,y4);
            printf("Area= %lf", area2);
        }


    else if((area3<=area1)&&(area3<=area2)&&(area3<=area4)) // condition for area3 to be minimum.
        {
            printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x3,y3,x4,y4);
            printf("Area= %lf", area3);
        }


    else if((area4<=area1)&&(area4<=area2)&&(area4<=area3)) //// condition for area4 to be minimum.
        {
            printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);
            printf("Area= %lf", area4);
        }



}

/*
Section 2
Roll no:22GG10052
Name:Vedant Thakare
Lab Test 1
Description : Finding the area of the largest triangle
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    float A1,A2,A3,A4,max,P1;
    //Taking the coordinate inputs
    printf("Enter the coordinates of point 1\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of point 2\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter the coordinates of point 3\n");
    scanf("%d%d",&x3,&y3);
    printf("Enter the coordinates of point 4\n");
    scanf("%d%d",&x4,&y4);
    //finding area of individual triangles
    A4=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(A4<0)
    {
        A4=-A4;
    }
    A3=0.5*(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2));
    if(A3<0)
    {
        A3=-A3;
    }
    A2=0.5*(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3));
    if(A2<0)
    {
        A2=-A2;
    }
    A1=0.5*(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3));
    if(A1<0)
    {
        A1=-A1;
    }
    //finding the max area
    max=A1;
    if(A2>max)
    {
        max=A2;
    }
    if(A3>max)
    {
        max=A3;
    }
    if(A4>max)
    {
        max=A4;
    }
    if((A1==A2)&&(A2==A3)&&(A3==A4)&&(A1!=0)&&(A2!=0)&&(A3!=0)&&(A4!=0))
    {
     printf("Points having maximum area :(%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
     P1=(sqrt(pow((x2-x3),2)+pow((y2-y3),2))+sqrt(pow((x4-x3),2)+pow((y4-y3),2))+sqrt(pow((x2-x4),2)+pow((y2-y4),2)));
     printf("Perimeter :%.2f",P1);

    }
    else if((A1==A2)&&(A2==A3)&&(A3==A4)&&(A4==0))
    {
     printf("Points having maximum area :(%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
     printf("Perimeter = 0 (since there is no triangle)");
    }
    else if(max==A1)
    {
        printf("Points having maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x2,y2,x3,y3,x4,y4);
        P1=(sqrt(pow((x2-x3),2)+pow((y2-y3),2))+sqrt(pow((x4-x3),2)+pow((y4-y3),2))+sqrt(pow((x2-x4),2)+pow((y2-y4),2)));
        printf("Perimeter :%.2f",P1);
    }
    else if(max==A2)
    {
        printf("Points having maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x3,y3,x4,y4);
        P1=(sqrt(pow((x1-x3),2)+pow((y1-y3),2))+sqrt(pow((x4-x3),2)+pow((y4-y3),2))+sqrt(pow((x1-x4),2)+pow((y1-y4),2)));
        printf("Perimeter :%.2f",P1);

    }
    else if(max==A3)
    {
        printf("Points having maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);
        P1=(sqrt(pow((x1-x2),2)+pow((y1-y2),2))+sqrt(pow((x4-x1),2)+pow((y4-y1),2))+sqrt(pow((x2-x4),2)+pow((y2-y4),2)));
        printf("Perimeter :%.2f",P1);

    }
    else if(max==A4)
    {
        printf("Points having maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
        P1=(sqrt(pow((x1-x2),2)+pow((y1-y2),2))+sqrt(pow((x3-x1),2)+pow((y3-y1),2))+sqrt(pow((x2-x3),2)+pow((y2-y3),2)));
        printf("Perimeter :%.2f",P1);

    }
    return 0;

}

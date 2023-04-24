/*
sec2
name-sandesh patil
roll no-22MF10034
Q NO. 1
DESCRIPTION-print perimeter of largest triangle
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,z1,z2,z3,perimeter;
    printf("enter the coordinates x1,y1,x2,y2,x3,y3,x4,y4 \n");
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

    printf("the value of %d is %d ",z1,(0.5*(x1*(y2-y3)- y1*(x2-x3) + 1*(x2*y3-y2*x3))));
    printf("the value of %d is %d ",z2,(0.5*(x1*(y2-y4)- y1*(x2-x4) + 1*(x2*y4-y2*x4))));
    printf("the value of %d is %d ",z3,(0.5*(x2*(y3-y4)- y2*(x3-x4) + 1*(x3*y4-y3*x4))));


    if(z1<0)
    {
        printf("the value of z1 is %d ",(-1*z1));
    }

    else if(z2<0)
    {
         printf("the value of z2 is %d",(-1*z2));
    }
    else if(z3<0)
    {
        printf("the value of z3 is %d ",(-1*z3));
    }



    if(z2>z3 || z2>z1)
    {;
        printf("points with maximum area (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
        printf("perimeter of triangle is %f",sqrt(pow((x2-x1),2)+ pow((y2-y1),2)) +sqrt(pow((x4-x1),2)+ pow((y4-y1),2)) +sqrt(pow((x2-x4),2)+ pow((y2-y4),2)));
    }
    else if(z1>z2 || z1>z3)
    {
      printf("points with maximum area (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
      printf("perimeter of triangle is %f",sqrt(pow((x2-x1),2)+ pow((y2-y1),2)) +sqrt(pow((x3-x1),2)+ pow((y3-y1),2)) +sqrt(pow((x2-x3),2)+ pow((y2-y3),2)));
    }
    else if(z3>z2 || z3>z1)
    {
         printf("points with maximum area (%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
         printf("perimeter of triangle is %f",sqrt(pow((x2-x3),2)+ pow((y2-y3),2)) +sqrt(pow((x4-x3),2)+ pow((y4-y3),2)) +sqrt(pow((x2-x4),2)+ pow((y2-y4),2)));
    }






    return 0;
}



/*
*    section 14
*    Name: Souvik
*     Roll no.:22ME10083
*    Assignment: 9
*    Topic:Structures
*    Question no.:4
*    Programme to find the two circle intersecting or not
*/
#include<stdio.h>
#include<math.h>
// defining structure to assign the x,y coordinate and radius
typedef struct{
    int x;
    int y;
    float r;
}circle;
int  IsIntersctingCircle(circle a, circle b)
{
    float d1;//to calculate distance b/w their centers
    float d2;//to calculate distance b/w their radii
    //logic
    d1=sqrt(pow((a.x - b.x),2)+pow((a.y - b.y),2));
    printf("\n%f\n",d1);
    if(a.r < b.r)
    d2=(b.r + a.r);
    else   
    d2=(a.r + b.r);   
    // result
    if(d1<d2)
    printf("\nCircles are intersecting");
    else   
    printf("\nCircles are NOT intersecting");
    return 0;
}
void main(){
    // initializing varribles
    circle c1,c2,c;
    //taking i/p for circle 1
    printf("Enter coordinate of centre and radius of circle1:\n");
    scanf("%d%d%f",&c1.x,&c1.y,&c1.r);
    printf("\nCentre of c1 is(%d,%d) and radius %f",c1.x,c1.y,c1.r);
    //taking i/p for circle 2
    printf("\nEnter x,y coordinate of centre and radius of circle2:\n");
    scanf("%d%d%f",&c2.x,&c2.y,&c2.r);
    printf("\nCentre of c2 is(%d,%d) and radius %f",c2.x,c2.y,c2.r);
    //calling the function for circle 1
    IsIntersctingCircle(c1,c2);


}
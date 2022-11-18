/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include <math.h>
float a1,a2,a3,b1,b2,b3,c1,c2,c3,side1,side2,side3,area,intersection_pts[6];

void intersection(int line1,int line2,float a1, float b1,float c1, float a2,float b2,float c2,int a){
    float x,y;
    if (a1/a2==b1/b2==c1/c2){
        printf("Lines %d and %d are parallel;so no point of intersection",line1,line2);
        return ;
    }
    else {
        x=(c2*b1-c1*b2)/(a1*b2-a2*b1);
        y=(c2*a1-c1*a2)/(a2*b1-a1*b2);
        intersection_pts[a]=x;
        intersection_pts[(a+1)]=y;
        
    }
}

int main()
{
    
    printf("$ Enter the coeffecients (a,b,c) of three lines:");
    printf("Line 1:");
    scanf("%f%f%f",&a1,&b1,&c1);
    printf("Line 2:");
    scanf("%f%f%f",&a2,&b2,&c2);
    printf("Line 3:");
    scanf("%f%f%f",&a3,&b3,&c3);  
    intersection(1,2,a1,b1,c1,a2,b2,c2,0);
    intersection(2,3,a2,b2,c2,a3,b3,c3,2);
    intersection(3,1,a3,b3,c3,a1,b1,c1,4);
    printf("point of intersection between L1 and L2=(%f,%f)",intersection_pts[0],intersection_pts[1]);
    printf("point of intersection between L2 and L3=(%f,%f)",intersection_pts[2],intersection_pts[3]);
    printf("point of intersection between L3 and L1=(%f,%f)",intersection_pts[4],intersection_pts[5]);
    side1=sqrt(pow((intersection_pts[0]-intersection_pts[2]),2)+pow((intersection_pts[1]-intersection_pts[3]),2));
    side2=sqrt(pow((intersection_pts[2]-intersection_pts[4]),2)+pow((intersection_pts[3]-intersection_pts[5]),2));
    side3=sqrt(pow((intersection_pts[4]-intersection_pts[0]),2)+pow((intersection_pts[5]-intersection_pts[1]),2));
    printf("side lengths= %f,%f,%f",side1,side2,side3);
    area=fabs(0.5*((intersection_pts[0](intersection_pts[3]-intersection_pts[5]))+intersection_pts[2](intersection_pts[5]-intersection_pts[1])+intersection_pts[2](intersection_pts[1]-intersection_pts[3])));
    printf("Area= %f",area);
    return 0;
}
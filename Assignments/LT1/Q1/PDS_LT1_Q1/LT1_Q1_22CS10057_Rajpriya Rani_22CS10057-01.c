/*name- Rajpriya Rani
roll number= 22CS10057
sec-2
program-1*/

#include <stdio.h>
#include<math.h>
void main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    double a1,a2,a3,a4,s1,s2,s3,s4,s12,s13,s14,s23,s24,s34;
    printf("enter coordinates: (x1,y1),(x2,y2),(x3,y3),(x4,y4)  ");
    scanf("%d,%d%d,%d%d,%d%d,%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    s12=sqrt((pow((x1-x2),2)) + (pow((y1-y2),2)));   //calculating sides
    s13=sqrt((pow((x1-x3),2)) + (pow((y1-y3),2)));
    s14=sqrt((pow((x1-x4),2)) + (pow((y1-y4),2)));
    s23=sqrt((pow((x2-x3),2)) + (pow((y2-y3),2)));
    s24=sqrt((pow((x2-x4),2)) + (pow((y2-y4),2)));
    s34=sqrt((pow((x3-x4),2)) + (pow((y3-y4),2)));

    s1=((float)(s12+s23+s13))/2.0;      //calculating semi perimeter
    s2=((float)(s14+s13+s34))/2.0;
    s3=((float)(s12+s14+s24))/2.0;
    s4=((float)(s24+s23+s34))/2.0;

    a1=sqrt(s1*(s1-s12)*(s1-s23)*(s1-s13));     //calculating area
    a2=sqrt(s2*(s2-s14)*(s2-s13)*(s2-s34));
    a3=sqrt(s3*(s3-s12)*(s3-s14)*(s3-s24));
    a4=sqrt(s4*(s4-s24)*(s4-s23)*(s4-s34));


    if((a1<a2) && (a1<a3) && (a1<a4))
    {
        printf("\n The points having the min area: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        printf("\n Area= %lf",a1);
    }
    else if((a2<a1) && (a2<a3) && (a2<a4))
    {
        printf("\n The points having the min area: (%d,%d),(%d,%d),(%d,%d)",x4,y4,x1,y1,x3,y3);
        printf("\n Area= %lf",a2);
    }
    else if((a3<a2) && (a3<a1) && (a3<a4))
    {
        printf("\n The points having the min area: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);     //printing points
        printf("\n Area= %lf",a3);      //printing area
    }
    else if((a4<a2) && (a4<a1) && (a4<a1))
    {
        printf("\n The points having the min area: (%d,%d),(%d,%d),(%d,%d)",x3,y3,x2,y2,x4,y4);
        printf("\n Area= %lf",a4);
    }
    else
    {
        printf("\n The points having the min area: (%d,%d),(%d,%d),(%d,%d)",x3,y3,x2,y2,x4,y4);
        printf("\n Area=0");
    }


}

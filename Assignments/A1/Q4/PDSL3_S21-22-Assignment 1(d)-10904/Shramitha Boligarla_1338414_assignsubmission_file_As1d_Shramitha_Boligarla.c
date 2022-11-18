/* NAME: Shramitha Boligarla
   ROLL NO. : 21ME10024      */

#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float a,b,c; // Length of sides are a,b,c

    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("Enter the three coordinates: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);

    a= sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    b= sqrt(pow((x3-x2),2) + pow((y3-y2),2));
    c= sqrt(pow((x1-x3),2) + pow((y1-y3),2));

    if (a+b>c && b+c>a && c+a>b) printf("This is a valid triangle\n");
        else printf("This is an invalid triangle\n");

    float max;

    if (c>a && c>b) {if (pow(c,2)==(pow(a,2)+pow(b,2)))printf("It is a right angled triangle");
                     else if (pow(c,2)>(pow(a,2)+pow(b,2))) printf("It is a obtuse angled triangle");
                     else printf("It is an acute angled triangle");}


    else if (b>a && b>c) {if (pow(b,2)==(pow(a,2)+pow(c,2))) printf("It is a right angled triangle");
                     else if (pow(b,2)>(pow(a,2)+pow(c,2))) printf("It is an obtuse angled triangle");
                     else printf("It is an acute angled triangle");}

    else {if (pow(a,2)== (pow(b,2)+pow(c,2))) printf("It is a right angled triangle");
                     else if (pow(a,2)>(pow(b,2)+pow(c,2))) printf("It is a obtuse angled triangle");
                     else printf("It is an acute angled triangle");}

}

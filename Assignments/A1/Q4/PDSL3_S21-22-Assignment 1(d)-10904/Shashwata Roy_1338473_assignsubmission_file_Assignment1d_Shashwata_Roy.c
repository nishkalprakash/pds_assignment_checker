/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#include<math.h>

int main(){
    double x1,x2,x3,y1,y2,y3,d1,d2,d3;
    printf("Enter the first point coordinates: ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter the second point coordinates: ");
    scanf("%lf %lf",&x2,&y2);
    printf("Enter the third point coordinates: ");
    scanf("%lf %lf",&x3,&y3);
    d1= sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    d2= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    d3= sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    if((d1+d2>d3)&&(d1+d3>d2)&&(d2+d3>d1)){
        printf("This is a valid triangle\n");
        if(((d1*d1+d2*d2)==(d3*d3))||((d1*d1+d3*d3)==(d2*d2))||((d3*d3+d2*d2)==(d1*d1)))
            printf("This is a right-angled triangle");
        else if(((d1*d1+d2*d2)<(d3*d3))||((d1*d1+d3*d3)<(d2*d2))||((d3*d3+d2*d2)<(d1*d1)))
            printf("This is an obtuse-angled triangle");
        else
            printf("This is an acute-angled triangle");
    }
    else
        printf("This is an invalid triangle\n");
return 0;
}

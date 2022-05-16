/*************************
*Section:3
*Roll No:21MA10017
*Name:Bimal Gayali
*Week:2
*Assignment No:1d

*******/


#include<stdio.h>
#include<math.h>

int main() {
    float x1,y1,x2,y2,x3,y3,a,b,c,side,area;
    printf("enter the x,y coordinates");
    printf("input 3 numbers for x coordinates");
    scanf("%f%f%f",&x1,&y1,&x2);
    printf("input 3 numbers for y coordinates");
    scanf("%f%f%f",&y2,&x3,&y3);

    a=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    b=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    c=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));



    side=((a+b+c)/2);

    area=sqrt(side*(side-a)*(side-b)*(side-c));
    printf("/n area of triangle is %f",area);
    if (a + b <= c || a + c <= b || b + c <= a){
        printf("it is an invalid triangle\n");
    }else{
        printf("it is an invalid triangle");
    }


return 0;
}

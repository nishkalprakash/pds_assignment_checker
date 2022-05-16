#include <stdio.h>
#include<math.h>
/*Name:Kondakindi Shreya Reddy
Roll no.:21CE10032
Department:Civil Engineering
Package:CodeBlocks
Operating System:Windows*/

int main()
{
    float x1,y1,x2,y2,x3,y3;
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("enter the three coordinates: (%f,%f),(%f,%f),(%f,%f)\n",x1,y1,x2,y2,x3,y3);
    float a,b,c;//a=length of line passing through (x1,y1),(x2,y2),b=length of line passing through (x2,y2),(x3,y3)
    a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    if(((c<a+b)&&(b<a+c))&&(a<b+c)){
        printf("it is a valid triangle\n");
        if(((pow(c,2)==pow(a,2)+pow(b,2))||(pow(b,2)==pow(a,2)+pow(c,2)))||(pow(a,2)==pow(b,2)+pow(c,2))){
        printf("it is a right angled triangle");
    }
    else if(((pow(c,2)>pow(a,2)+pow(b,2))||(pow(b,2)>pow(a,2)+pow(c,2)))||(pow(a,2)>pow(b,2)+pow(c,2))){
        printf("it is an obtuse angled triangle");
    }
    else if(((pow(c,2)<pow(a,2)+pow(b,2))||(pow(b,2)<pow(a,2)+pow(c,2)))||(pow(a,2)<pow(b,2)+pow(c,2))){
        printf("it is an acute angled triangle");
    }
    }
    else{
        printf("it is an invalid triangle");
    }
    return 0;


}

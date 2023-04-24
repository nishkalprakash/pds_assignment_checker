
#include <stdio.h>
#include<math.h>
int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;
    float A,s1,s2,s3,s4,B,C,D;
    float a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
    float max_area;
    printf("(x1,y1) = ");
    scanf("%d%d",&x1,&y1);
    printf("\n(x2,y2) = ");
    scanf("%d%d",&x2,&y2);
    printf("\n(x3,y3) = ");
    scanf("%d%d",&x3,&y3);
    printf("\n(x4,y4) = ");
    scanf("%d%d",&x4,&y4);
    a1 = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    a2 = sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    a3 = sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
    s1 = (a1+a2+a3)/2;
    A = sqrt(s1*(s1-a1)*(s1-a2)*(s1-a3));
    b1 = sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    b2 = sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
    b3 = sqrt(((x4-x2)*(x4-x2))+((y4-y2)*(y4-y2)));
    s2 = (b1+b2+b3)/2;
    B = sqrt(s2*(s2-b1)*(s2-b2)*(s2-b3));
    c1 = sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
    c2 = sqrt(((x4-x1)*(x4-x1))+((y4-y1)*(y4-y1)));
    c3 = sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    s3 = (c1+c2+c3)/2;
    C = sqrt(s3*(s3-c1)*(s3-c2)*(s3-c3));
    d1 = sqrt(((x4-x1)*(x4-x1))+((y4-y1)*(y4-y1)));
    d2 = a1;
    d3 = b3;
    s4 = (d1+d2+d3)/2;
    D = sqrt(s4*(s4-d1)*(s4-d2)*(s4-d3));
    if((A>B)&&(A>C)&&(A>D)){
        printf("\nPoints having maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        printf("\nPerimeter: %f",2*s1);
    }
    else if((B>A)&&(B>C)&&(B>D)){
        printf("\nPoints having maximum area:(%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
        printf("\nPerimeter: %f",2*s2);


    }
    else if((C>A)&&(C>B)&&(C>D)){
        printf("\nPoints having maximum area:(%d,%d),(%d,%d),(%d,%d)",x3,y3,x4,y4,x1,y1);
        printf("\nPerimeter: %f",2*s3);


    }
    else if((D>A)&&(D>B)&&(D>C)){
        printf("\nPoints having maximum area:(%d,%d),(%d,%d),(%d,%d)",x4,y4,x1,y1,x2,y2);
        printf("\nPerimeter: %f",2*s4);

    }
    else{
        printf("\nPoints having maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        printf("\nPerimeter: %f",2*s1);

    }











    return 0;


}

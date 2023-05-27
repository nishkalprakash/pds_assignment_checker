#include<stdio.h>
#include<math.h>
int main() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d,%d", &x1,&y1);
    printf("(x1,y1) = %d,%d\n", x1,y1);
    scanf("%d,%d", &x2,&y2);
    printf("(x2,y2) = %d,%d\n", x2,y2);
    scanf("%d,%d", &x3,&y3);
    printf("(x3,y3) = %d,%d\n", x3,y3);
    scanf("%d,%d", &x4,&y4);
    printf("(x4,y4) = %d,%d\n", x4,y4);
    double a1,a2,a3,a4,l1,l2,l3,l4,l5,l6,s1,s2,s3,s4;
   /** a1 = 1/2(x1*(y2-y3)-x2*(y3-y1)+x3*(y1-y2));)
    a2 = 1/2(x1*(y3-y4)-x3*(y4-y1)+x4*(y1-y3));
    a3 = 1/2(x1*(y2-y4)-x2*(y4-y1)+x4*(y1-y2));
    a4 = 1/2(x2*(y3-y34-x3*(y4-y2)+x4*(y2-y3)); **/
    l1 = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    l2 = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
    l3 = sqrt(pow((x1-x3),2) + pow((y1-y3),2));
    l4 = sqrt(pow((x4-x2),2) + pow((y4-y2),2));
    l5 = sqrt(pow((x3-x4),2) + pow((y3-y4),2));
    l6 = sqrt(pow((x1-x4),2) + pow((y1-y4),2));
    s1 = l1 + l2 + l3;
    s2 = l2 + l5 +l4;
    s3 = l3 + l5 +l6;
    s4 = l2 + l1 +l4;

    a1 = sqrt(s1*(s1-l1)*(s1-l2)*(s1-l3));
    a2 = sqrt(s2*(s2-l2)*(s2-l5)*(s2-l4));
    a3 = sqrt(s3*(s3-l3)*(s3-l5)*(s3-l6));
    a4 = sqrt(s4*(s4-l2)*(s4-l1)*(s4-l4));
    if(a1>a2&&a1>a3&&a1>a4) {
        printf("points having the maxmimum areas : (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
        printf("Perimeter = %lf\n", s1);
    }
     else if(a3>a2&&a3>a1&&a3>a4) {
        printf("points having the maxmimum areas : (%d,%d),(%d,%d),(%d,%d)\n",x3,y3,x1,y1,x4,y4);
        printf("Perimeter = %lf\n", s3);
    }
     else if(a2>a1&&a2>a3&&a2>a4) {
        printf("points having the maxmimum areas : (%d,%d),(%d,%d),(%d,%d)\n",x2,y2,x3,y3,x4,y4);
        printf("Perimeter = %lf\n", s2);
    }
     else if(a4>a2&&a4>a3&&a4>a1) {
        printf("points having the maxmimum areas : (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);
        printf("Perimeter = %lf\n", s4);
    }
    return 0;
}
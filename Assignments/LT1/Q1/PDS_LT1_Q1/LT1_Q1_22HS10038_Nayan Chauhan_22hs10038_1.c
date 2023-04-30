#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, max, xa, ya, xb, yb, xc, yc;
    float a1, a2, a3, a4, perimeter;
    printf("(x1,y1) = ");
    scanf("%d%d", &x1, &y1);
    printf("(x2,y2) = ");
    scanf("%d%d", &x2, &y2);
    printf("(x3,y3) = ");
    scanf("%d%d", &x3, &y3);
    printf("(x4,y4) = ");
    scanf("%d%d", &x4, &y4);
    a1 = fabs((x2*y3-x3*y2-x1*y3+x1*y2+y1*x3-y1*x2)/2.0);
    a2 = fabs((x2*y4-x4*y2-x1*y4+x1*y2+y1*x4-y1*x2)/2.0);
    a3 = fabs((x3*y4-x4*y3-x2*y4+x2*y3+y2*x4-y2*x3)/2.0);
    a4 = fabs((x3*y4-x4*y3-x1*y4+x1*y3+y1*x4-y1*x3)/2.0);
    if(a1>=a2){
        if(a1>=a3){
            if(a1>=a4){
                max = a1;
            }
            else{
                max=a4;
            }
        }
        else{
            if(a3>=a4){
                max = a3;
            }
            else{
                max = a4;
            }
        }
    }
    else{
        if(a2>=a3){
            if(a2>=a4){
                max = a2;
            }
            else max = a4;
        }
        else{
            if(a3>=a4){
                max=a3;
            }
            else max = a4;

        }
    }
    if(max==a1){
        xa=x1, ya=y1, xb=x2, yb=y2, xc=x3, yc=y3;
    }
    else if(max==a2){
        xa=x1, ya=y1, xb=x2, yb=y2, xc=x4, yc=y4;
    }
    else if(max==a3){
        xa=x2, ya=y2, xb=x3, yb=y3, xc=x4, yc=y4;
    }
    else if(max==a4){
        xa=x1, ya=y1, xb=x3, yb=y3, xc=x4, yc=y4; //will recheck the order when two areas are equal through test cases if i get time
    }
    printf("Points having the maximum area: (%d,%d), (%d,%d), (%d,%d)", xa,ya,xb,yb,xc,yc);
    if(max==0){
            printf("\nPerimeter = 0 (since there is no triangle)");
    }
    else{
    perimeter = sqrt(((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)))+sqrt(((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc)))+sqrt(((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya)));
    printf("\nPerimeter = %.2f", perimeter);
    }
}

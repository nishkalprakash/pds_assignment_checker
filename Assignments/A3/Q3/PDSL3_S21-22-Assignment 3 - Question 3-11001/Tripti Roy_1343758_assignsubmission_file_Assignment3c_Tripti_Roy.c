# include<stdio.h>
# include<math.h>

int main(){
    int a1, b1, a2, b2, a3, b3, c1, c2, c3;
    double d1, d2, d3, x1, x2, x3, y1, y2, y3, l1, l2, l3, ar, s;
    printf("enter the coefficients of the first line.\n");
    scanf("%d%d%d", &a1, &b1, &c1);
    printf("enter the coefficients of the second line.\n");
    scanf("%d%d%d", &a2, &b2, &c2);
    printf("enter the coefficients of the third line.\n");
    scanf("%d%d%d", &a3, &b3, &c3);
    d1=a1*b2-a2*b1;
    d2=a2*b3-a3*b2;
    d3=a3*b1-a1*b3;
    if(d1==0){
        printf("The lines L1 and L2 are parallel so no point of intersection.\n");
    }
    else if(d2==0){
        printf("The lines L2 and L3 are parallel so no point of intersection.\n");
    }
    else if(d3==0){
        printf("The lines L1 and L3 are parallel so no point of intersection.\n");
    }
    else{
            x1=(c1*b2 - c2*b1)/d1;
            y1=(a1*c2 - a2*c1)/d1;
            x2=(c2*b3 - c3*b2)/d2;
            y2=(a2*c3 - a3*c2)/d2;
            x3=(c3*b1 - c1*b3)/d3;
            y3=(a3*c1 - a1*c3)/d3;
            l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
            l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
            l3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
            s=(l1+l2+l3)/2;
            ar=sqrt(s*(s-l1)*(s-l2)*(s-l3));
            printf("Point of intersection of L1 and L2 is(%lf,%lf)\n", x1, y1);
            printf("Point of intersection of L2 and L3 is(%lf,%lf)\n", x2, y2);
            printf("Point of intersection of L1 and L3 is(%lf,%lf)\n", x3, y3);
            printf("The length of the sides are %lf, %lf and %lf\n", l1, l2, l3);
            printf("Area of the triangle formed = %lf\n", ar);
    }

    return 0;
}

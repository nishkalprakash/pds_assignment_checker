/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    double d1, d2, d3, m, sum;
    printf("Enter the three coordinates: ");
    scanf("(%d, %d), (%d, %d), (%d, %d)", &x1, &y1, &x2, &y2, &x3, &y3);
    d1 = sqrt(pow((double)(x1-x2), 2.0) + pow((double)(y1-y2), 2.0));
    d2 = sqrt(pow((double)(x2-x3), 2.0) + pow((double)(y2-y3), 2.0));
    d3 = sqrt(pow((double)(x3-x1), 2.0) + pow((double)(y3-y1), 2.0));
    m = fmax(fmax(d1, d2), d3);
    if (m < (d1+d2+d3)-m){
        printf("This is a valid triangle\n");
        sum = pow(d1, 2.0) + pow(d2, 2.0) + pow(d3, 2.0) - pow(m, 2.0);
        if(fabs(pow(m, 2.0)- sum) < 0.01){
            printf("This is a right-angled triangle.\n");
        }
        else if(pow(m, 2.0) > sum){
            printf("This is an obtuse-angled triangle.\n");
        }
        else{
            printf("This is an acute-angled triangle.\n");
        }

    }
    else{
        printf("This is an invalid triangle.\n");
    }
    
    return 0;
}

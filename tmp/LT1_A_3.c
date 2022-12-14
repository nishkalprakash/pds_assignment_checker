// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check whether 3 coordiates form a triangle and classify its type

#include<stdio.h>
#include<math.h>
float sq(x){
    return x*x;
}
float dist(x1,x2,y1,y2){
    return sqrt(sq(x1-x2) + sq(y1-y2));
}
int main()
{
    int x1,x2,x3,y1,y2,y3;
    double d1, d2, d3, m, sum;
    printf("Enter the three coordinates: ");
    scanf("(%d, %d), (%d, %d), (%d, %d)", &x1, &y1, &x2, &y2, &x3, &y3);
    d1 = dist(x1,x2,y1,y2);
    d2 = dist(x3,x2,y3,y2);
    d3 = dist(x3,x1,y3,y1);
    m = fmax(fmax(d1, d2), d3);
    if (m < (d1+d2+d3)-m){
        printf("This is a valid triangle\n");
        sum = sq(d1) + sq(d2) + sq(d3) - sq(m);
        if(fabs(sq(m)- sum) < 0.01)
            printf("This is a right-angled triangle.\n");
        else if(sq(m) > sum)
            printf("This is an obtuse-angled triangle.\n");
        else
            printf("This is an acute-angled triangle.\n");
    }
    else
        printf("This is an invalid triangle.\n");
    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    //declaring the required variable
    int a,b,c;
    double x,root1,root2;
    //taking the coefficient a,b,c as inputs from the user
    scanf("%d %d %d",&a,&b,&c);
    //evaluating the discriminant
    x=sqrt((b*b)-(4*a*c));
    //calculatting the roots using sridhaharya formula
    root1= (-b+x)/(2*a);
    root2= (-b-x)/(2*a);
    //printing the roots.
    printf("%lf %lf",root1,root2);
    return 0;
}
    


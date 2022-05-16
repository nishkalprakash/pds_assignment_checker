// question 4
// triangle
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,s1,s2,s3;
    printf("Enter the 3 coordinates \nEnter V1(=x1,y1) ");
    scanf("%f",&x1);
    scanf("%f",&y1);

    printf("Enter V2(=x2,y2) ");
    scanf("%f",&x2);
    scanf("%f",&y2);

    printf("Enter V3(=x3,y3) ");
    scanf("%f",&x3);
    scanf("%f",&y3);

    s1=pow(((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)),0.5);
    s2=pow(((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)),0.5);
    s3=pow(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)),0.5);

    if((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3)>s2)
        printf("This is a valid Triangle\n");
    else
    {
        printf("This is an invalid triangle");
        return 0;
    }

    if(((s1*s1)>(s2*s2+s3*s3))||((s2*s2)>(s1*s1+s3*s3))||((s3*s3)>(s2*s2+s1*s1)))
        printf("This is an Obtuse-angled triangle\n");
    else if(((s1*s1)==(s2*s2+s3*s3))||((s2*s2)==(s1*s1+s3*s3))||((s3*s3)==(s2*s2+s1*s1)))
        printf("This is an right-angled triangle \n");
    else 
    {
        printf("This is an Acute-angled triangle \n");
    }

    return 0;
}
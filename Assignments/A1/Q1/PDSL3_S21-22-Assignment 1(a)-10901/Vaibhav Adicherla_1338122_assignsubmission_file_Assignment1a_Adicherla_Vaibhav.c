/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/

#include <stdio.h>
int main()
{
    float a,u,alpha;
    printf("Enter the values of a,u,alpha in order:");
    scanf("%f%f%f",&a,&u,&alpha);
    float time;
    printf("Enter the time:");
    scanf("%f",&time);

    float distance;
    distance = u*time+0.5*alpha*time*time +a;
    printf("Distance = %f", distance);
    return 0;


}

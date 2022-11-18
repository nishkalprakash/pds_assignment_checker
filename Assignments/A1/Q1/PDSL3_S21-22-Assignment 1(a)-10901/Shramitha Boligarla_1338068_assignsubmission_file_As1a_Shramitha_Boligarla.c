/* NAME: Shramitha Boligarla
   ROLL NO. : 21ME10024      */

#include<stdio.h>
int main()
{
    float s,t,d;
    int a,u, alpha;

    printf("Enter values of a,u,alpha in order:\n");
    scanf("%d%d%d",&a,&u,&alpha);

    printf("Enter the time:\n");
    scanf("%f",&t);

    //Let 's' be the displacement

    s= u*t + 0.5*alpha*(pow(t,2));

    d= s+a;

    printf("Distance=%f",d);
    return (0);

}

#include<stdio.h>

/*name-Chetna
  dep-CSE
  Roll no.-21CS10019
  package-codeblocks*/

int main()
{
    float a,u,t,alpha,d;

    printf("Enter the value of a,u,alpha:\n");
    scanf("%f%f%f",&a,&u,&alpha);

    printf("Enter the value of t:\n");
    scanf("%f",&t);

    d=u*t+0.5*alpha*t*t+a;

    printf("distance=%f\n",d);
}

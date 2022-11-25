#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float root1, root2;
    scanf("%d %d %d" ,&a,&b,&c);
    
    root1=(-b+sqrt(b*b-4*a*c))/2*a;
    root2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("Root1=%f\n",root1);
    printf("Root2=%f\n",root2);
    return 0;
}

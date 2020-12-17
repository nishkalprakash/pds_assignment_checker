


#include <stdio.h>

int main() 
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    printf("The bottom left coordinates are (%d,%d) \n",a ,b);
    scanf("%d%d", &c, &d);
    printf("The top right coordinates are (%d,%d) \n", c, d);
    {
        int l, m ,n , o;
        l=c;
        m=b;
        n=a;
        o=d;
        printf("The coordinates of the rectangle are (%d,%d)(%d,%d)(%d,%d)(%d,%d) \n", a , b ,n ,o ,c ,d ,l ,m);
        {
            int p, q;
            scanf("%d%d", &p, &q);
            {
                if(a*p<=p<=b*p&&a*q<=q<=b*q)printf("The point lies outside the rectangle \n");
                else 
                printf("The point lies inside the rectangle \n");
            return 0;
                
            }
        }
    }

    
}

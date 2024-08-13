#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double s;
    double rs;
    double ts;
    double D;
    
    printf("Enter value of alpha: \n");
    scanf("%le", &a);
    
    printf("Enter value of sigma: \n");
    scanf("%le", &s);
    
    printf("Enter value of Rs: \n");
    scanf("%le", &rs);
    
    printf("Enter value of Ts: \n");
    scanf("%le", &ts);
    
    printf("Enter value of D: \n");
    scanf("%le", &D);
    
    double tp;
    
    tp = ts*(sqrt(((rs/2*D)*sqrt((1 - a)/s))));
    printf("Value of Tp = %le" , tp);
    
    return 0;
    }
    
    

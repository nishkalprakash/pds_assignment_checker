
// question 3
// car manufacturing

#include <stdio.h>
int main()
{
    int n,m,d;
    int k;
    float bf;
    
    printf("Enter the number of machines: ");
    scanf("%d",&m);
    printf("Enter the day number(1-7): ");
    scanf("%d",&d);
    float a;
    switch (d)
    {
        case 1: 
            n=m;
            printf("Number of manufactured cars = %d",n);
            break;
        case 2:
            a=m+m/2.0+m/4.0;
            n=a;
            float n1=n;
            if(a-n1>=0.5) n=a+1;
            printf("Number of manufactured cars = %d",n);
            break;
        case 3:
        case 6:
            
            printf("Enter no of machines under inspection: ");
            scanf("%d",&k);
            a=m-k+(m-k)/2.0+(m-k)/4.0;
            n=a;
            float n2=n;
            if(a-n2>=0.5) n=a+1;
            printf("Number of manufactured cars = %d",n);
            break;
        case 4:
        case 5:
        case 7:
            
            printf("Enter boosting fraction: ");
            scanf("%f",&bf);
            a=m+bf*m;
            n=a;
            float n3=n;
            if(a-n3>=0.5) n=a+1;
            printf("Number of manufactured cars = %d",n);
            break;
        default :
            printf("Invalid Day");
    }
    return 0;
}

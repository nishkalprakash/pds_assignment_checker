#include <stdio.h>
/*Name:Kondakindi Shreya Reddy
Roll no.:21CE10032
Department:Civil Engineering
Package:CodeBlocks
Operating System:Windows*/

int main()
{
    int n,day,m,k;//n=number of cars manufactured,m=number of machines available,k=machines under inspection
    float f;//f=boosting fraction
    printf("enter number of machines:");
    scanf("%d",&m);
    printf("enter the day number(1-7):");
    scanf("%d",&day);
    switch(day){
        case 1:n=m;
        printf("the number of manufactured cars= %d",n);
        break;
        case 2:n=(int)(m+(m/2)+(m/4));
        printf("the number of manufactured cars= %d",n);
        break;
        case 3:printf("enter number of machines under inspection:");
        scanf("%d",&k);
        n=(int)((m-k)+((m-k)/2)+((m-k)/4));
        printf("the number of manufactured cars= %d",n);
        break;
        case 4:printf("enter boosting fraction:");
        scanf("%f",&f);
        n=m+m*f;
        printf("the number of manufactured cars= %d",n);
        break;
        case 5:printf("enter boosting fraction:");
        scanf("%f",&f);
        n=m+m*f;
        printf("the number of manufactured cars= %d",n);
        break;
        case 6:printf("enter number of machines under inspection:");
        scanf("%d",&k);
        n=(int)((m-k)+((m-k)/2)+((m-k)/4));
        printf("the number of manufactured cars= %d",n);
        break;
        case 7:printf("enter boosting fraction:");
        scanf("%f",&f);
        n=m+m*f;
        printf("the number of manufactured cars= %d",n);
        break;
        default:printf("not a valid day");
        break;
}
return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int k,da,nm,nc;
    float f;
    printf("Enter the no. of machines:");
    scanf("%d",&nm);
    printf("\nEnter the day number (1-7) :");
    scanf("%d",&da);
    printf("\nEnter the no. of machines under inspection :");
    scanf("%d",&k);
    printf("\nEnter the no. of faction (0-1) :");
    scanf("%f",&f);
    switch(da)
    {
        case 1: nc=nm; break;
        case 2: nc=nm+nm/2+nm/4;  break;
        case 3:
        case 6: nc=nm-k+(nm-k)/2+(nm-k)/4;   break;
        case 4:
        case 5:
        case 7: nc=nm+f;   break;
    }
    printf("\nNo. of manufactured cars is %d",nc);
    return 0;
}

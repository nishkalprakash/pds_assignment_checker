#include<stdio.h>
#include<math.h>
int main()
{
    float k,f,nc;
    int da;
    printf("enter the no of matches:");
    scanf("%f",&nm);
    printf("\nEnter the  day number(1-7):");
    scanf("%d",da);
    printf("\nEnter the no. of matches under inspection:");
    scanf("%f",&k);
    printf("n\Enter the no. of faction (0-1):");
    scanf("%f",&f);
    switch(da)
    {
        case'1':nc=nm;break;
        case'2':nc=nm+nm/2+nm/4; braek;
        case'3':
        case'6':nc=nm-k+(nm-k)/2+(nm-k)/4: break;
        case'4':
        case'5':
            case'7':nc=nm+f; break;

    }

    printf("\nNo. of manufactured cars is %f",nc);
    return 0;
}

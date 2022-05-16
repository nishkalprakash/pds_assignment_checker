/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>
#include<math.h>



int main()
{
    int daynum, n;
    float f, m, k;
    printf("Enter the number of machines\n");
    scanf("%f", &m);
    printf("Enter the day number Monday to Sunday (1-7)\n");
    scanf("%d", &daynum);
    if ((daynum<1)||(daynum>7))
    {
        printf("Only choose nnumber between 1 to 7\n");
    }
    else
    {
        switch (daynum)
    {
    case 1:
        n=m;
        break;
    case 2:
        n= round((7*m)/4);//(7*m/4) is same as m+ (m/2)+(m/4)
        break;
    case 3:
        printf("Enter the machine under inspection\n");
        scanf("%f", &k);
        m=(m-k);
        n=round((7*m)/4);
        break;
    case 6:
        printf("Enter the machine under inspection\n");
        scanf("%f", &k);
        m=(m-k);
        n=round((7*m)/4);
        break;
    default:
        printf("Enter the boosting factor f(<1)\n");
        scanf("%f", &f);
        m=m+(f*m);
        n=round(m);
        break;
    }
    printf("The number of machines manufactured that day are %d", n);
    }
return 0;
}
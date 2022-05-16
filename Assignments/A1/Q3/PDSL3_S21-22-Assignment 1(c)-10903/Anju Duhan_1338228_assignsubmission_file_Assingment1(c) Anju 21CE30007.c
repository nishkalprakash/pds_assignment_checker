#include<stdio.h>
main()
{
int m, day, n, k;
float f;
printf("\nEnter the number of machines: ");
scanf("%d",&m);
printf("\nEnter the day number (1-7): ");
scanf("%d",&day);
switch(day)
{
case 1:
    n=m;
break;
case 2:
    n=m+m/2+m/4;
break;
case 3:
    printf("\nEnter no. of machines under inspection: ");
    scanf("%d",&k);
    n=m-k+(m-k)/2+(m-k)/4;
break;
case 4:
    printf("\nEnter boosting fraction:");
    scanf("%f",&f);
    n=m+f*m;
break;
case 5:
    printf("\nEnter boosting fraction:");
    scanf("%f",&f);
    n=m+f*m;
break;
case 6:
    printf("\nEnter no. of machines under inspection: ");
    scanf("%d",&k);
    n=m-k+(m-k)/2+(m-k)/4;
break;
case 7:
    printf("\nEnter boosting fraction:");
    scanf("%f",&f);
    n=m+f*m;
break;
}
printf("\nNumber of manufactured cars= %d",n);
}

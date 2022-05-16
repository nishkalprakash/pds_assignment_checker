#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{int a[10],b[10],i;
float meana,meanb,slope,suma=0,sumb=0;
float d=0,e=0,c;
printf("enter x coordinates\n");
for(i=0;i<10;i++)
{scanf("%d",&a[i]);}
printf("enter y coordinates\n");
for(i=0;i<10;i++)
{scanf("%d",&b[i]);}
for(i=0;i<10;i++)
{suma=suma+a[i];
sumb=sumb+b[i];
}
meana=suma/10;
meanb=sumb/10;
for(i=0;i<10;i++)
{d=d+(a[i]-meana)*(b[i]-meanb);
e=e+(a[i]-meana)*(a[i]-meana);
}
slope= d/e;
c=meanb-slope*meana;
printf("slope=%.1f\t y-intercept=%.1f\n",slope,c);
printf("Line equation = y=%.1fx+%.1f",slope,c);
return 0 ;
}






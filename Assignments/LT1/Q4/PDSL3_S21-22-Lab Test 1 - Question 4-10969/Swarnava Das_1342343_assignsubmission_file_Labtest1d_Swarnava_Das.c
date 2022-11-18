// NAME: SWARNAVA DAS 
// ROLL: 21NA10037 
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE 
// PACKAGE: VISUAL STUDIO CODE 
// ASSIGNMENT CLASS:5

#include<stdio.h>
int main()
{int i;
    int x[10],y[10];
int sumx=0,sumy=0;
float mx,my,f,g,m,b;
    for ( i = 0; i < 10; i++)
    {
        printf("ENTER THE VALUE OF x%d\n",i);
        scanf("%d",&x[i]);
    }
     for ( i = 0; i < 10; i++)
    {
        printf("ENTER THE VALUE OF y%d\n",i);
        scanf("%d",&y[i]);
    }

for ( i = 0; i < 10; i++)
{
    sumx=sumx+x[i];
}
for ( i = 0; i < 10; i++)
{
    sumy=sumy+y[i];
}

mx=(sumx/10.0);
my=(sumy/10.0);
for ( i = 0; i < 10; i++)
{
    f=f+((x[i]-mx)*(y[i]-my));
    g=g+((x[i]-mx)*(x[i]-mx));
}
m=f/g;
b=my-(m*mx);
printf("m=%f\n",m);
printf("b=%f\n",b);
printf("line equation y = %fx+ %f",m,b);

    return 0;
}

/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
*/
#include <stdio.h>

int main(){
int n,i;
printf("Enter the no of points:\n");
scanf("%d",&n);
float x[n],y[n],xm,ym,m,b,mn=0,md=0,sumx=0,sumy=0;

printf("Enter the x coordinates of points respectively:\n");

for(i=0;i<=n-1;i++){
    scanf("%f",&x[i]);
}

printf("Enter the y coordinates of points respectively:\n");

for(i=0;i<=n-1;i++){
    scanf("%f",&y[i]);
}


for(i=0;i<=n-1;i++){
    sumx+=x[i];
    sumy+=y[i];
}

xm=sumx/n;
ym=sumy/n;

for(i=0;i<=n-1;i++){
    mn+=((x[i]-xm)*(y[i]-ym));
    md+=((x[i]-xm)*(x[i]-xm));
}

m=mn/md;
b=ym-m*(xm);

printf("m=%0.1f, b=%0.1f, line equation: y=%0.1f x + %0.1f\n",m,b,m,b);
return 0;
}

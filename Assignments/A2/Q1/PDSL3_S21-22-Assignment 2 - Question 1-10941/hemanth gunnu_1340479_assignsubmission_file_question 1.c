#include<stdio.h>
#include<math.h>
int main()
{
int k;
float z;

scanf("%f%d",&z,&k);
printf("z=%f,k=%d\n",z,k);
for (int j=1;j<=k;j++){
float m=z;
float s=sqrt(z);
z=z-s;

if (z<0){z=z*-1;}while(m-z<=0){if(m-z<=0){break;}

printf("y\n");
s=s-(1/(j*j));
z=z-s;}

if(z<0){z=z*-1;}
printf("%d%f",z,j);

if(z==0||j==50){break;}



printf(",");}
return 0;

}

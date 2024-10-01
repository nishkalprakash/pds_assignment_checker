#include<stdio.h>
int gcd ( int, int);
int a,b,c,d,e,temp;
int main ()
{
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a>b)
{
temp = a;
a=b;
b=temp;
}

printf("output:%d and %d are Co-Prime\n",a,b);
printf("output:%d and %d are Co-Prime\n",a,c);
printf("output:%d and %d are Co-Prime\n",a,d);
printf("output:%d and %d are Co-Prime\n",a,e);
printf("output:%d and %d are Co-Prime\n",b,c);
printf("output:%d and %d are Co-Prime\n",b,d);
printf("output:%d and %d are Co-Prime\n",c,d);
printf("output:%d and %d are Co-Prime\n",c,e);
printf("output:%d and %d are Co-Prime\n",d,e);

return 0;
}



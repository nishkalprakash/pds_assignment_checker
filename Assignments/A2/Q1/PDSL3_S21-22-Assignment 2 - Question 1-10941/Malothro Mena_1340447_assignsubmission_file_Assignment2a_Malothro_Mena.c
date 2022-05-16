# include<stdio.h>
# include <math.h>

int main()
{
    float i=0,z,zi1,k;
    printf("enter values of z and k\n");
    scanf("%f%f",&z,&k);
    while(z>=0){
    zi1 =z-sqrt(z);
    if (zi1<0)break;
    else if(zi1==0);
    zi1=zi1-1/k*k;
    printf("%f",zi1);
    break;
    }

    return 0;

}


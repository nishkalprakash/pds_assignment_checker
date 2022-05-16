#include<stdio.h>
#include<math.h>
int main()
{
    int i, k;
    float zn,z,s;
    printf("enter the number of iterations");
    scanf("%d",&k);
    printf("enter the initial height");
    scanf("%f",&z);
    for ( i = 1; i <=k; i++)
    {
        s=sqrt(z);
        z=z-s;
        zn=z;

        if(zn==z){
        s= pow(s-(1/(i)),2);
    }
    if(zn==0){break;}
    if (zn<0)
    {
        zn==(-zn);
    }

    printf(" %f %d \n",z,i);

    }

return(0);
}

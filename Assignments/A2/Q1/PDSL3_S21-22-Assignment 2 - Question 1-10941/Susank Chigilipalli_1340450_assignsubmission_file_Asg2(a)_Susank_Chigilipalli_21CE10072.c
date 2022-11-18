/*This program is to find step wise position of particle sliding down the parabolic shaped container */
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
#include<math.h>
int main()
{
   int k;
   float z,i,zp,znp,sp;
   printf("Enter the height of the container : ");
   scanf("%f",&z);
   printf("Please enter number of iterations you want to run a loop : ");
   scanf("%d",&k);
   zp=z;
   for(i=1;i<=k;i++)
   {
     sp=sqrt(zp);
     znp=zp-sp;
     if(znp<0)
     {
        znp=znp-2*znp;
     }
     if(znp==zp)
     {
        sp=sp-(1/(i*i));
        znp=znp-sp;
     }
     zp=znp;
     printf("(%f,%d)",znp,i);
     if((znp==0))
     {
       break;
     }
   }
}

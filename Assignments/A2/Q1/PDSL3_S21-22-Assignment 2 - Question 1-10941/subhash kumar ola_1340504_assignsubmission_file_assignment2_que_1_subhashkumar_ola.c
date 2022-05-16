#include <stdio.h>
#include <math.h>

int main()
{
float z,z1,s,j=0;
int k,i=1;

printf("Enter z and k: ");
scanf("%f %d",&z,&k);

while(1){
    s=pow(z,0.5);
    z1=z-s;

    if(z1<0){
        z1=-z1;
    }
    printf("(%f,%d) ",z1,i);
    if(z1==-z){
       s=1-(1/k);
       z1=z1-s*s;
     }
     z=z1;
    if(z==0){
        break;
    }
    if(i==k){
        break;
    }

    i++;
}

}

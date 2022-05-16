#include<stdio.h>
int main()
{
    float z,s,z1=0;
    int k,i;
    printf("Enter the height(z)=");
    scanf("%f",&z);
    printf("Enter the current iteration number(k)=");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        if(z>0){s=sqrt(z);
        z=z-s;}
     if(z<0){z=-z;};
        if(z==z1){
            s=s-1/i;
            z=z-s*s;}
     if(z==0){
            break;}
     if(z<0){z=-z;};
     printf("\n(%f,%d)",z,i);
     z1=z;
    }
     return 0;


}

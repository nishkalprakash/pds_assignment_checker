/*
Name: Ankit Yadav
Roll NO: 21EE30005
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Assignment class:2
*/

#include<stdio.h>
#include<math.h>


int main(){

    float z,s,i,p,k,t=-1;

    printf("Enter the values of z and k\n");
    scanf("%f %f",&z,&k);

    for(i=0;i<k;i++){

        p=z;
        s=sqrt(z);
        z=z-s;
        if(z<0) z=z*t;
        printf("(%f , %f) ",z,i+1);
        if(z==p){s=(s-(1/((i+1))));
                z=z-(s*s);}
        if(z==0) break;



    }

return 0;
}

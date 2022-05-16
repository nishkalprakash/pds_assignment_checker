#include<stdio.h>
main(){
    float s,z,m;
    int k,i,r;
    printf("Enter height");
    scanf("%f",&z);
    printf("Enter the current teration number: ");
    scanf("%d",&k);
    i=1;
    r=0;
    m=z;
    while(i<=k){
        s=sqrt(z);
        if(r==1){
            s=s-(1/i);
            z=z-(pow(s,2));
            r=0;
        }
        else{
            z=z-s;
        }
        if(z<0){
            z*=-1;
        }
        printf("(%f,%d), ",z,i);
        if(z==0){
            break;
        }
        if(z==m){
            r=1;
        }
        i++;
        m=z;
  return 0;
    }
    }


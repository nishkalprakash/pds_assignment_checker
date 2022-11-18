/*Name:Kondakindi Shreya Reddy
Roll no.:21CE10032
Department:Civil Engineering
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
int main(){
    int min1,min2,min3,min4,total;
    int m1[4]={8200, 8300, 6900, 9200};

    int m2[4]={7700, 3700, 4900, 9200};
    int m3[4]={1100, 6900, 500, 8600};
    int m4[4]={1100, 6900, 500, 8600};
    int i,j,k,l;

    for(i=0;i<4;i++){
        m1[0]=min1;
        if(m1[i]<min1){
            m1[i]=min1;
            printf("%d",i);
    }
    }
    for(j=0;j<4;j++){
        m2[0]=min2;
        if(m2[j]<min2){
            m2[j]=min2;
            printf("%d",j);
    }
    }
    for(k=0;k<4;k++){
    m3[0]=min3;
        if(m3[k]<min3){
            m3[k]=min3;
            printf("%d",k);
    }
    }
    for(l=0;l<4;l++){
    m4[0]=min4;
        if(m4[l]<min4){
            m4[l]=min4;
            printf("%d",l);
    }
    }
    total=min1+min2+min3+min4;
    printf("total=",total);
    return 0;

}



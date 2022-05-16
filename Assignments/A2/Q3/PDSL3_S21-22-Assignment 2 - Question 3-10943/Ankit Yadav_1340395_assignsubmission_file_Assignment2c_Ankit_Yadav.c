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

    int m1[4],m2[4],m3[4],m4[4];
    int i,j,k,l,p1,p2,p3,p4,t;
    char ma1[20],ma2[20],ma3[20],ma4[20];


    printf("Enter the values for first vendor");

    for(i=0;i<4;i++){
        scanf("%d",&m1[i]);
    }
    printf("Enter the values for second vendor");

    for(j=0;j<4;j++){
        scanf("%d",&m1[j]);
    }
    printf("Enter the values for third vendor");

    for(k=0;k<4;k++){
        scanf("%d",&m1[k]);
    }
    printf("Enter the values for fourth vendor");

    for(l=0;l<4;l++){
        scanf("%d",&m1[l]);
    }

    t= m1[0]+m2[1]+m3[2]+m4[3];
    ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";

    if((m1[1]+m2[0]+m3[2]+m4[3])>t){
        t=(m1[1]+m2[0]+m3[2]+m4[3]);
        ma1="vendor2";
    ma2="vendor1";
    ma3="vendor3";
    ma4="vendor4";
    }
        if((m1[0]+m2[1]+m3[3]+m4[2])>t){
        t=(m1[0]+m2[1]+m3[3]+m4[2]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor4";
    ma4="vendor3";
    }

        if((m1[0]+m2[2]+m3[3]+m4[1])>t){
        t=(m1[0]+m2[2]+m3[3]+m4[1]);
        ma1="vendor1";
    ma2="vendor3";
    ma3="vendor4";
    ma4="vendor2";
    }
    if((m1[0]+m2[2]+m3[1]+m4[3])>t){
        t=(m1[0]+m2[2]+m3[1]+m4[3]);
        ma1="vendor1";
    ma2="vendor3";
    ma3="vendor2";
    ma4="vendor4";
    }
    if((m1[0]+m2[3]+m3[1]+m4[2])>t){
        t=(m1[0]+m2[3]+m3[1]+m4[2]);
        ma1="vendor1";
    ma2="vendor4";
    ma3="vendor2";
    ma4="vendor3";
    }
    if((m1[1]+m2[0]+m3[3]+m4[2])>t){
        t=(m1[1]+m2[0]+m3[3]+m4[2]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[1]+m2[2]+m3[3]+m4[0])>t){
        t=(m1[1]+m2[2]+m3[3]+m4[0]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[1]+m2[2]+m3[0]+m4[3])>t){
        t=(m1[1]+m2[2]+m3[0]+m4[3]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[0]+m2[3]+m3[2]+m4[1])>t){
        t=(m1[0]+m2[3]+m3[2]+m4[1]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";

    if((m1[1]+m2[3]+m3[0]+m4[2])>t){
        t=(m1[1]+m2[3]+m3[0]+m4[2]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[1]+m2[3]+m3[2]+m4[0])>t){
        t=(m1[1]+m2[3]+m3[2]+m4[0]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[2]+m2[1]+m3[0]+m4[3])>t){
        t=(m1[2]+m2[1]+m3[0]+m4[3]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[2]+m2[1]+m3[3]+m4[0])>t){
        t=(m1[2]+m2[1]+m3[3]+m4[0]);
       ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[2]+m2[0]+m3[1]+m4[3])>t){
        t=(m1[2]+m2[0]+m3[1]+m4[3]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }

    if((m1[2]+m2[0]+m3[3]+m4[1])>t){
        t=(m1[2]+m2[0]+m3[3]+m4[1]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[2]+m2[3]+m3[1]+m4[0])>t){
        t=(m1[2]+m2[3]+m3[1]+m4[0]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[2]+m2[3]+m3[0]+m4[1])>t){
        t=(m1[2]+m2[3]+m3[0]+m4[1]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[3]+m2[1]+m3[2]+m4[0])>t){
        t=(m1[3]+m2[1]+m3[2]+m4[0]);
       ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[3]+m2[1]+m3[0]+m4[2])>t){
        t=(m1[3]+m2[1]+m3[0]+m4[2]);
       ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[3]+m2[0]+m3[1]+m4[2])>t){
        t=(m1[3]+m2[0]+m3[1]+m4[2]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[3]+m2[0]+m3[2]+m4[1])>t){
        t=(m1[3]+m2[0]+m3[2]+m4[1]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[3]+m2[2]+m3[1]+m4[0])>t){
        t=(m1[3]+m2[2]+m3[1]+m4[0]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    if((m1[3]+m2[2]+m3[0]+m4[1])>t){
        t=(m1[3]+m2[2]+m3[0]+m4[1]);
        ma1="vendor1";
    ma2="vendor2";
    ma3="vendor3";
    ma4="vendor4";
    }
    printf("total cost = %d",t);



return 0;
}

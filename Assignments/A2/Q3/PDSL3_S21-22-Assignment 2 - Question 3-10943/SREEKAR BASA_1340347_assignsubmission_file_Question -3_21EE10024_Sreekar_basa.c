/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Assignment 2(c)
*/
#include <stdio.h>
#include <math.h>
int main()
{
 int i,i1,i2,i3,i4,j,n=4,sum1[6],sum2[6],sum3[6],sum4[6];
 int m1[4]={8200,8300,6900,9200},m2[4]={7700,3700,4900,9200} ;
 int m3[4]={1100,6900,500,8600},m4[4]={800,900,9800,2300};
 int Minimum,min1,min2,min3,min4 ;

for(j=0;j<n;j++)
   {
    if(j==0){
    sum1[0]=m1[0]+m2[1]+m3[2]+m4[3];
    sum1[1]=m1[0]+m2[1]+m3[3]+m4[2];
    sum1[2]=m1[0]+m2[2]+m3[1]+m4[3];
    sum1[3]=m1[0]+m2[2]+m3[3]+m4[1];
    sum1[4]=m1[0]+m2[3]+m3[1]+m4[2];
    sum1[5]=m1[0]+m2[3]+m3[2]+m4[1];
    min1 = sum1[1] ;
    for(i1=0;i1<6;i1++)
    { if(sum1[i] < min1) min1 = sum1[i];
      else min1 = min1 ; }
      printf(" min1 - %d %d %d %d %d %d \n",sum1[0],sum1[1],sum1[2],sum1[3],sum1[4],sum1[5]);
    }

    if(j==1){
    sum2[0]=m1[1]+m2[0]+m3[2]+m4[3];
    sum2[1]=m1[1]+m2[0]+m3[3]+m4[2];
    sum2[2]=m1[1]+m2[2]+m3[0]+m4[3];
    sum2[3]=m1[1]+m2[2]+m3[3]+m4[0];
    sum2[4]=m1[1]+m2[3]+m3[0]+m4[2];
    sum2[5]=m1[1]+m2[3]+m3[2]+m4[0];
    min2 = sum2[2] ;
    for(i2=0;i2<6;i2++)
    { if(sum2[i] < min2) min2 = sum2[i];
      else min2 = min2 ; }
      printf(" min2 - %d %d %d %d %d %d \n",sum2[0],sum2[1],sum2[2],sum2[3],sum2[4],sum2[5]);
    }

    if(j==2){
    sum3[0]=m1[2]+m2[0]+m3[1]+m4[3];
    sum3[1]=m1[2]+m2[0]+m3[3]+m4[1];
    sum3[2]=m1[2]+m2[1]+m3[0]+m4[3];
    sum3[3]=m1[2]+m2[1]+m3[3]+m4[0];
    sum3[4]=m1[2]+m2[3]+m3[0]+m4[1];
    sum3[5]=m1[2]+m2[3]+m3[1]+m4[0];
    min3 = sum3[3] ;
    for(i3=0;i3<6;i3++)
    { if(sum3[i] < min3) min3 = sum3[i];
      else min3 = min3 ; }
      printf(" min3 - %d %d %d %d %d %d \n",sum3[0],sum3[1],sum3[2],sum3[3],sum3[4],sum3[5]);
    }

    if(j==3){
    sum4[0]=m1[3]+m2[0]+m3[1]+m4[2];
    sum4[1]=m1[3]+m2[0]+m3[2]+m4[1];
    sum4[2]=m1[3]+m2[1]+m3[0]+m4[2];
    sum4[3]=m1[3]+m2[1]+m3[2]+m4[0];
    sum4[4]=m1[3]+m2[2]+m3[0]+m4[1];
    sum4[5]=m1[3]+m2[2]+m3[1]+m4[0];
    min4 = sum4[4] ;
    for(i4=0;i4<6;i4++)
    { if(sum4[i] < min4) min4 = sum4[i];
      else min4 = min4 ; }
    }
    printf(" min4 - %d %d %d %d %d %d \n",sum4[0],sum4[1],sum4[2],sum4[3],sum4[4],sum4[5]);
    }

 printf(" %d %d %d %d \n",min1,min2,min3,min4);
 int Min[4];
 Min[0] = min1;
 Min[1] = min2;
 Min[2] = min3;
 Min[3] = min4;
 for(i=0;i<n;i++)
 {
   Minimum = min1 ;
   if(Min[i] < Minimum) Minimum = Min[i] ;
 }
 printf("Minimum cost is : %d",Minimum);
 return 0;
}

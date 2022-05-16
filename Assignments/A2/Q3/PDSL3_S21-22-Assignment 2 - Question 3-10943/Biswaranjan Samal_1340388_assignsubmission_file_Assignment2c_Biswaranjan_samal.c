/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:
*/

#include<stdio.h>
#include<math.h>
 int main() {

     int m1[4]={ , , , };
     int m2[4]= { , , , };
     int m3[4]={ , , , };
     int m4[4]={ , , , };
    int min;
     int cost[50];

     cost[0]= m1[1]+m2[2]+m3[3]+m4[4];
     cost[1]= m1[1]+m2[2]+m3[4]+m4[3];
     cost[2]= m1[1]+m2[3]+m3[2]+m4[4];
     cost[3]= m1[1]+m2[3]+m3[4]+m4[2];
     cost[4]= m1[1]+m2[4]+m3[2]+m4[3];
     cost[5]= m1[1]+m2[4]+m3[3]+m4[2];

      cost[6]= m1[2]+m2[1]+m3[3]+m4[4];
     cost[7]= m1[2]+m2[1]+m3[4]+m4[3];
     cost[8]= m1[2]+m2[3]+m3[1]+m4[4];
     cost[9]= m1[2]+m2[3]+m3[4]+m4[1];
    cost[10]= m1[2]+m2[4]+m3[1]+m4[3];
      cost[11]= m1[2]+m2[4]+m3[3]+m4[1];

     cost[12]= m1[3]+m2[1]+m3[2]+m4[4];
     cost[13]= m1[3]+m2[1]+m3[4]+m4[2];
     cost[14]= m1[3]+m2[2]+m3[1]+m4[4];
     cost[15]= m1[3]+m2[2]+m3[4]+m4[1];
     cost[16]= m1[3]+m2[4]+m3[1]+m4[2];
      cost[17]= m1[3]+m2[4]+m3[2]+m4[1];

     cost[18]= m1[4]+m2[1]+m3[2]+m4[3];
     cost[19]= m1[4]+m2[1]+m3[3]+m4[2];
     cost[20]= m1[4]+m2[2]+m3[1]+m4[3];
     cost[21]= m1[4]+m2[2]+m3[3]+m4[1];
     cost[22]= m1[4]+m2[3]+m3[1]+m4[2];
     cost[23]= m1[4]+m2[3]+m3[2]+m4[1];

 min = cost[0];
 for(i=1,i<24,i=i++)
 {
     if (cost[i]<min)
        min= cost[i];
 }



    printf("Minimum cost is %d",min);














































     return 0; }

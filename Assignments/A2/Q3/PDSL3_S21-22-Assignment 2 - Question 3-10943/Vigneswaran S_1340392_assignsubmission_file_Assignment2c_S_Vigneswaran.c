/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system:ubuntu 20.04
Sec 3*/
#include<stdio.h>
#include<stdlib.h>
int main(){
 int n=4,tot=29000;

 int m1[4]={8200,8300,6900,9200},m2[4]={7700,3700,4900,9200},m3[4]={1100,6900,500,8600},m4[4]={800,900,9800,2300},ind[4];
 for(int i=1;i<=4;i++){
  for(int j=1;j<=4;j++){
   for(int k=1;k<=4;k++){
    for(int l=1;l<=4;l++){
     if(m1[i-1]+m2[j-1]+m3[k-1]+m4[l-1]<tot && i !=j && j !=k && k !=i && i !=l && j !=l && k !=l ){
     tot=m1[i-1]+m2[j-1]+m3[k-1]+m4[l-1];
     ind[0]=i;
     ind[1]=j;
     ind[2]=k;
     ind[3]=l;}
     }
    }
  }
 }
 printf("Total cost=%d \nMachine1:Vendor%d\nMachine2:Vendor%d\nMachine3:Vendor%d\nMachine4:Vendor%d",tot,ind[0],ind[1],ind[2],ind[3]);
 return 0;
}

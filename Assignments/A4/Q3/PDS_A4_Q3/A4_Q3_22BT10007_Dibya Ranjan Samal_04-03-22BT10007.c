/* Sec:2
Name: Dibya Ranjan Samal
Roll no:22BT10007
Assignment: 04-03
Description : Numero Pyramid */




#include<stdio.h>
int main(){
    int n;
printf("Enter of the size of triangle\n");
scanf("%d",&n); //size of triangle is n
for(int i=1;i<=n;i++){
        int s=n-i+1;
    for(int j=1;j<=s;j++){ // space triangle
        printf(" ");
        }
    for(int j=1;j<=2*i-1;j++){  // second triangle
        if(j<10)printf("%d",j);
        if(j>=10)printf("%d",j-10);
          }
    for(int j=2*(i-1);j>=i;j--){
        if(j<10)printf("%d",j);
        if(j>=10)printf("%d",j-10);// third triangle
    }

  printf("\n"); }

    return 0;}









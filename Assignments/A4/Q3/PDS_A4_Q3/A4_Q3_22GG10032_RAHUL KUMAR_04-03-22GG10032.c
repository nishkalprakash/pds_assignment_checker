/*
* Section : 2
* Name : Rahul Kumar
* Roll no. : 22GG10032
* Assignment : 4
* Description : Program for Numero-Pyramid
*/
#include<stdio.h>
int main()
{
  int i,j,k,t, rows;
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
     for(k=rows-i;k>0;k--){
        printf("%d\n",rows-i);
     }
     int y=i;
     for(j=i;j<=2*i-1;j++){
        printf("%d\n",j);
     }


  }
}

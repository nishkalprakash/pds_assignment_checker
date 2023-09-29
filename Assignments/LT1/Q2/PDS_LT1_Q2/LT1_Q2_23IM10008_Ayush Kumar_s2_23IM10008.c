//NAME-AYUSH KUMAR
//ROLL-23IM10008.c
#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;
  double i;
printf("Enter the number of  random numbers required");
scanf("%d",n);
//finding the random numbers 
i=rand()%100+n;
 printf("\lf",i);
return 0;
}

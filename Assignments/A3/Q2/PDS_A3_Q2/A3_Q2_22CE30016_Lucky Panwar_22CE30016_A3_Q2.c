/*
 Section 14
 Roll No : 22CE30016
 Name : LUCKY PANWAR
 Assignment No : 3
 Description : Program to check correct time 
*/

#include <stdio.h>

int main()
{
int XX; // Declaring a two-digit intger between 20 to 99
printf("Enter a two-digit integer between 20 to 99\n ");
scanf("%d", &XX);
if(XX/10==2){
  printf("Twenty");
  }
 else if(XX/10==3){
  printf("Thirty");
  }
 else if(XX/10==4){
  printf("Forty");
  }
 else if(XX/10==5){
  printf("Fifty");
  }
 else if(XX/10==6){
  printf("Sixty");
  }
 else if(XX/10==7){
  printf("Seventy");
  }
 else if(XX/10==8){
  printf("Eighty");
  }
else if(XX/10==9){
  printf("Ninety");
  } 


if(XX%10==1){
  printf("one");
  }
 else if(XX%10==2){
  printf("two");
  }
 else if(XX%10==3){
  printf("three");
  }
 else if(XX%10==4){
  printf("four");
  }
 else if(XX%10==5){
  printf("five");
  }
 else if(XX%10==6){
  printf("six");
  }
 else if(XX%10==7){
  printf("seven");
  }
 else if(XX%10==8){
  printf("eight");
  }
else if(XX%10==9){
  printf("nine");
  }
return 0;
}


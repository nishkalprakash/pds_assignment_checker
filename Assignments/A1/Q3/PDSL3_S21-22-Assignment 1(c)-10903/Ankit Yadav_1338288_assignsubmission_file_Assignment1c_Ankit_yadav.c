/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Assignment class : 1
*/


#include<stdio.h>
#include<math.h>

int main(){

  int Day,k,n1;
  float n,f,m;

  printf("Enter the number of machines");
  scanf("%f",&m);
  printf("\nEnter the day number");
  scanf("%d",&Day);

  switch(Day){
         case 1: printf("\nNumber of manufactured cars= %d",m);
                     break;
         case 2: n = m+(m/2)+(m/4);
                 n1=round(n);
                 printf("\nNumber of manufactured cars= %d",n1);
                     break;
         case 3:
         case 6: printf("\nEnter the number of machines under inspection");
                 scanf("%d",&k);
                 n=((m-k)+(m-k)/2 + (m-k)/4);
                 n1=round(n);
                 printf("\nNumber of manufactured cars= %d",n1);
                     break;
         case 4:
         case 5:
         case 7: printf("\nEnter the boosting fraction");
                 scanf("%f",&f);
                 n=m+(f*m);
                 n1=round(n);
                 printf("\nNumber of Manufactured cars= %d",n1);
                     break;
         default: printf("Invalid input");
                   break;


  }

    return 0;
}

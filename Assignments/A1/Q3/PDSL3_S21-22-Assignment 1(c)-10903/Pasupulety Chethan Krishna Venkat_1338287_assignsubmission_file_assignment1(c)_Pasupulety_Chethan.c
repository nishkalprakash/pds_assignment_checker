/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
    int n,day,m;

    printf("Enter the number of machines:");
    scanf("%d",&m);

    printf("Enter the day number(1-7):");
    scanf("%d",&day);

    switch(day) {

      case 1 :{
          n=m;
          printf("Number of manufactured cars = %d ",n);
      } break;

      case 2 :{
          n=m + m/2 + m/4;
          printf("Number of manufactured cars = %d ",n+1));
      } break;

      case 3 :{
          int k;
          printf("Enter no. of machines under inspection:");
          scanf("%d",&k);
          n= (m-k) + (m-k)/2 + (m-k)/4;
          printf("Number of manufactured cars = %d ",n+1);
      } break;

      case 4 :{
          float f;
          printf("Enter boosting fraction:");
          scanf("%f",&f);
          n=m+m*f;
          printf("Number of manufactured cars = %d ",n+1);
      } break;

      case 5 :{
          float f;
          printf("Enter boosting fraction:");
          scanf("%f",&f);
          n=m+m*f;
          printf("Number of manufactured cars = %d ",n+1);
      } break;

      case 6 :{
          int k;
          printf("Enter no. of machines under inspection:");
          scanf("%d",&k);
          n= (m-k) + (m-k)/2 + (m-k)/4;
          printf("Number of manufactured cars = %d ",n+1);
      } break;

      case 7 :{
          float f;
          printf("Enter boosting fraction:");
          scanf("%f",&f);
          n=m+m*f;
          printf("Number of manufactured cars = %d ",n+1);
      } break;

      default : printf("You have not entered valid day");
    }

  return 0;
}









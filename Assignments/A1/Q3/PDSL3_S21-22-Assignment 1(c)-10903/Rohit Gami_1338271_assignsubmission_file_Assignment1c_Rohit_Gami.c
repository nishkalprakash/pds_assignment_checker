#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,y,k,n;
    float f;
    printf("Enter the number of machines!\n");
    scanf("%d",&m);
    printf("Enter the day number (1-7)\n");
    scanf("%d",&y);
    switch(y)
    {
      case 1:
          printf("Number of manufactured cars= %d\n",m);
      break;
      case 2:
          n= round(m + m*0.5 + m*0.25) ;
          printf("Number of manufactured cars= %d\n",n);
      break;
      case 3:
          printf("Enter no. of machines under inspection\n");
          scanf("%d",&k);
          n= round( m-k + (m-k)*0.5 + (m-k)*0.25);
          printf("Number of manufactured cars= %d\n",n);
      break;
      case 4:
          printf("Enter boosting fraction\n");
          scanf("%d",&f);
          //where the fraction f is positive and less than 1 and taken as user input
          n= round(m+f*m);
          printf("Number of manufactured cars= %d\n",n);
      break;
      case 5:
          printf("Enter boosting fraction\n");
          scanf("%d",&f);
          //where the fraction f is positive and less than 1 and taken as user input
          n= round(m+f*m);
          printf("Number of manufactured cars= %d\n",n);
      break;
      case 6:
          n=  round(m-k + (m-k)/2 + (m-k)/4);
          printf("Number of manufactured cars= %d\n",n);
      break;
      case 7:
          printf("Enter boosting fraction\n");
          scanf("%d",&f);
          //where the fraction f is positive and less than 1 and taken as user input
          n= round(m+f*m);
          printf("Number of manufactured cars= %d\n",n);
          break;
      default :
          printf("Invalid input\n");
          break;
    }
    return 0;
}

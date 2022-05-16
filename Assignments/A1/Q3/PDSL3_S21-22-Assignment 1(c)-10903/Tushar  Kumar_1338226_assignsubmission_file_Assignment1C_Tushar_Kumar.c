/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
int main()
{
  float p,q,k,s,t;
  int x;
  printf("Enter the number of Machines-");
  scanf("%f",&p);
  printf("Enter the day number-");
  scanf("%d",&x);

  switch(x)
  {
    case 1:q=p;
    printf("Number of Manufactured cars=%f",q);
    break;

    case 2:p+p/2+p/4;
     if(t-(int)t>=0.5)
     q=(int)t+1;
    else
      q=(int)t;
    printf("Number of Manufactured cars-");
    break;

    case 3:
    case 6:
    printf("Enter no.of Machines under inspection:");
                 scanf("%f",&k);
                 t = (p-k) + (p-k)/2 + (p-k)/4;
                 if(t-(int)t >= 0.5)
                    q = (int)t + 1;
                 else
                    q = (int)t;
                 printf("Number of manufactured cars = %f",q);
                break;

     case 4 :
     case 5 :
     case 7 : printf("Enter the boosting factor =");
              scanf("%f",&s);
               t = p + s*p;
              if(t-(int)t >= 0.5)
               q = (int)t + 1;
            else
               q = (int)t;
               printf("Number of manufactured cars = %f",q);
            break;
        default : printf("INVALID");
    }


  }


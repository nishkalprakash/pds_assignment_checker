//Roll no: 23MI33022
//Name: Sreetama Das

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, x, n, count=0;
  float a,b,c,d,e,f,g,h,j,k;
  printf("How many random numbers to generate? ");
  scanf("%d", &n); // accepting how many random numbers to generate
  printf("The random numbers generated are: ");
  for(i=0; i<n; i++)
  {
    x= rand()%100+1; //generating random numbers
    printf("%d\n",x); // displaying random numbers
  }
  for(i=0; i<n; i++)
    {
     if(x>0 && x<=9)
    {
      count++; //incrementing count variable
      a=(count*100.0)/n;//calculating the percentage
    }
   else if(x>10 && x<=19)
    {
      count++;
    b=(count*100.0)/n;
    }
     else if(x>20 && x<=29)
    {
      count++;
    c=(count*100.0)/n;
    }
     else if(x>30 && x<=39)
    {
      count++;
    d=(count*100.0)/n;
    }
     else if(x>40 && x<=49)
       {
      count++;
    e=(count*100.0)/n;
    }
       else if(x>50 && x<=59)
    {
      count++;
    f=(count*100.0)/n;
    }
	else if(x>60 && x<=69)
    {
      count++;
    g=(count*100.0)/n;
    }
	else if(x>70 && x<=79)
    {
      count++;
    h=(count*100.0)/n;
    }
	else if(x>80 && x<=89)
    {
      count++;
    j=(count*100.0)/n;
    }
	   else if(x>90 && x<=99)
    {
      count++;
    k=(count*100.0)/n;
    }
  }
  //printing percentage of occurence of random numbers
 printf("Percentage of 0-9= %0.1f ", a);
 printf("Percentage of 10-19= %0.1f ", b);
 printf("Percentage of 20-29= %0.1f ", c);
 printf("Percentage of 30-39= %0.1f ", d);
 printf("Percentage of 40-49= %0.1f ", e);
 printf("Percentage of 50-59= %0.1f ", f);
 printf("Percentage of 60-69= %0.1f ", g);
 printf("Percentage of 70-79= %0.1f ", h);
 printf("Percentage of 80-89= %0.1f ", j);
 printf("Percentage of 90-99= %0.1f ", k);
	       
  return 0;
}

/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 2
Description:Significant digits
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,dig=0,n1,n2,n3,n4,rev=0;    //Declaring variables
    printf("Enter the Integer:");
    scanf("%d",&n);    //Taking input from user
    n1=n;
    while(n1!=0)     //counting the number of digits
    {
        dig++;
        n1/=10;
    }
    if(n%2!=0)      //checking for odd numbers
    {
      printf("Least significant digits to most significant digits:\n");
      n2=n>=0?n:-n;  //stores the absolute value of n
      if(dig==1)
        printf("%d",n2);
      else
        printf("%d,",n2);  //prints the first number
      for(int i=(int)pow(10,dig-1);i>1;i/=10)  //prints the consecutive numbers
      {
          if(i==10)
            printf("%d",n2-(n2/i)*i);
        else
            printf("%d,",n2-(n2/i)*i);
      }
    }
    else     //checks for even numbers
    {
      printf("Most significant digits to least significant digits:\n");
      n3=n>=0?n:-n;   //stores the absolute value of the number
      for(int i=(int)pow(10,dig-1);i>0;i/=10)
      {
          if(i==1)
            printf("%d",n3/i);
        else
            printf("%d,",n3/i);
      }

    }
    printf("\n");
    n4=n;
    while(n4!=0)    //reverses the digit
    {
       rev=rev*10+(n4%10);
       n4/=10;
    }
    printf("Reverse number = %d\n",rev);
    printf("Difference between Reverse and original number = %d",rev-n>0?rev-n:n-rev); //prints absolute value of the difference
    return 0;    //end
}

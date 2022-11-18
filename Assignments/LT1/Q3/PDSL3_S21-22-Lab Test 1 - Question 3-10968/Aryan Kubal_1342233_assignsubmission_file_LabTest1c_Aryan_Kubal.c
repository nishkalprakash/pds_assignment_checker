/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// defining a function digits which calculates the total numbers of digits of int n
int digits(int n)
{int k=0;
    while(n!=0)
    {
        k++;
        n=n/10;
    }
    return k;
}
// defining a function sum_digits which calculates the sum of digits of int num
int sum_digits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}
// declaring some variables and initializing their values
int main()
{int n,A,B;
int a=0;int b=0;
int fsA=0;int fsB=0;
printf("Enter the number of rounds: \n");
scanf("%d",&n); // getting the input for number of rounds
for(int i=0;i<n;i++)
{printf("round %d\n",i+1);
// determining whether A wins the game or B wins the game
    int badge_A,badge_B;
 int scoreA,scoreB;
    A=(rand() % (1000 - 5 + 1)) + 5;
    B=(rand() % (1000 - 5 + 1)) + 5;
 printf("A: %d   B:  %d",A,B);
 if(digits(A)>digits(B))
 {a++;
     badge_A=1;
     badge_B=0;
     scoreA=digits(A);
     scoreB=digits(B);
     fsA=fsA+scoreA;
     fsB=fsB+scoreB;
     printf(" A's point: %d     B's point: %d\n",scoreA,scoreB);
     printf(" A's badge: %d     B's badge: %d\n",badge_A,badge_B);
 }
  if(digits(A)<digits(B))
 {b++;
     badge_A=0;
     badge_B=1;
     scoreA=digits(A);
     scoreB=digits(B);
     fsA=fsA+scoreA;
     fsB=fsB+scoreB;
     printf(" A's point: %d     B's point: %d\n",scoreA,scoreB);
     printf(" A's badge: %d     B's badge: %d\n",badge_A,badge_B);
 }
        if(digits(A)==digits(B))
        {
            if(sum_digits(A)>sum_digits(B))
            {
                a++;
     badge_A=1;
     badge_B=0;
     scoreA=sum_digits(A);
     scoreB=sum_digits(B);
     fsA=fsA+scoreA;
     fsB=fsB+scoreB;
     printf(" A's point: %d     B's point: %d\n",scoreA,scoreB);
     printf(" A's badge: %d     B's badge: %d\n",badge_A,badge_B);
            }
                 if(sum_digits(A)<sum_digits(B))
            {
                b++;
     badge_A=0;
     badge_B=1;
     scoreA=sum_digits(A);
     scoreB=sum_digits(B);
     fsA=fsA+scoreA;
     fsB=fsB+scoreB;
     printf(" A's point: %d     B's point: %d\n",scoreA,scoreB);
     printf(" A's badge: %d     B's badge: %d\n",badge_A,badge_B);
            }
        }

}
printf("A's total score: %d     B's total score: %d\n",fsA,fsB);
//printing the final output as per the condition satisfied
if(fsA>fsB)
{
    printf("A wins the game");
}
if(fsB>fsA)
{
    printf("B wins the game");
}
return 0;}
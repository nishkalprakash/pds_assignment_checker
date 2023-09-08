//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  srand(time(0));           //changes the random generation of numbers
  int a, i, max=0;
  for (i=1;i<=20;i++){
    a=rand()%100+1;           //stores the randomly generated no. 
    printf("\n%d",a);       //prints random no. generated 
    if (a>max){max=a;}      //compares and stores the greater of the max and a to max
  }
  printf("The maximum no. generated is %d",max);    //prints the maximum no. generated
  return 0;
}

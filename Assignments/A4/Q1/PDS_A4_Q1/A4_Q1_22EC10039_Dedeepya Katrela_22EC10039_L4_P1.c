//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS

#include<stdio.h>
int main()
{ 
  int num,i,rem;
  printf("enter your number in the range(-999999,999999):");
  scanf("%d",&num);
  if(num<0)
  {num=-num;}

  for(i=1;i<=num;i++)
   { rem=num%i;
       if(rem==0)
       {printf("%d\n",i);}
       
   }
  if(num==0)
       {printf("0\n");}
 return 0;
}

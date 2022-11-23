/*Section 14
  Roll No :22GG10024
  Name : KRISHNA GUPTA
  Assignment No : 3
  Description : PROGRAM TO PRINT NUMBER NAMES */
#include <stdio.h> // main function
int main()
{
  int n,fd,ld;
  printf("Enter a two digit number : "); // taking a two digit number as input
scanf("%d",&n);
 if (n>=20&& n<=99){       

    fd = n/10;    // evaluating first digit 
    ld = n%10;    // evaluating second digit
 switch(fd)  //  cases for first digit naming
{  
case 2: printf("Twenty ");
    break ;
 case 3:printf("Thirty ");
    break ;
 case 4:printf("Fourty ");
    break ;
 case 5: printf("Fifty ");
    break ;
 case 6: printf("Sixty ");
    break ;
 case 7: printf("Seventy ");
    break ;
 case 8:printf("Eighty ");
    break ;
 case 9: printf("Ninety ");
    break ;
}
switch(ld)//  cases for second digit naming
{  
 case 0 : break ;
case 1: printf("one ");
    break ;
case 2:printf("Two ");
    break ;
 case 3:printf("Three ");
    break ;
 case 4: printf("Four ");
    break ;
 case 5: printf("Five ");
    break ;
 case 6:printf("Six ");
    break ;
 case 7: printf("Seven ");
    break ;
 case 8:printf("Eight ");
    break ;
 case 9:printf("Nine ");
    break ;
}
}
else{
printf("Enter a number between 20 and 99");
  return 0;
}
}

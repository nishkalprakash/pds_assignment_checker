/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>
#include<math.h>


int main()
{
    int num, revnum;
    int i, j, k;
    printf("Enter the three digit number you want to reverse\n");
    scanf("%d", &num);
    i=num%10;//Here i is assigned to the unit digit
    num=num/10;//The number becomes only two digit now(It removes the unit digit)
    j=num%10;
    k=num/10;
    revnum= (i*100)+(j*10)+k;
    printf("The reverse of the number you gave is %d", revnum);
return 0;
}
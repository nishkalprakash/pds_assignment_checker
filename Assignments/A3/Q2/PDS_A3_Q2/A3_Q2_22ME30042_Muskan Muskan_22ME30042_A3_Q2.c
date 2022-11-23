/* Section 14



    Roll No. : 22ME30042



   Name:  # Muskan#



  Assignment No: 3



  Description: Program  that take two digit integer between 20 to 99 and prints the value*/

#include<stdio.h>
int main()

{

int yx,x,y;                     /* two digit integer lies between 20 to 99*/

scanf("%d",&yx);

x =( yx)%10;

y=(yx)/10;

switch(y){case 2:

           printf("twenty ");
            break;
case 3:

           printf("thirty");
            break;
case 4:

           printf("fourty");
            break;
case 5:

           printf("fivty");
            break;
case 6:

           printf("sixty");
            break;
case 7:

           printf("seventy");
            break;
case 8:

           printf("eighty");
            break;
case 9:

           printf("ninety");
            break;}
switch(x){
case 0:

           printf(" ");
           break;
case 1:

           printf("one ");
            break;
case 2:

           printf("two ");
            break;
case 3:

           printf("three");
            break;
case 4:

           printf("four");
            break;
case 5:

           printf("five");
            break;
case 6:

           printf("six");
            break;
case 7:

           printf("seven");
            break;
case 8:

           printf("eight");
            break;
case 9:

           printf("nine");
            break;
default: ("invalid case");
}
return 0;
}


















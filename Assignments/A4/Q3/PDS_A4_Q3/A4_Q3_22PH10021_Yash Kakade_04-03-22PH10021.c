/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 4
* Description : Program to print Numero-Pyramid
*/

#include <stdio.h>

int main()
{

     int a,b=1,c=1,d=0,e=1,f; //Variables define

     printf("enter the number of rows: "); //Enter number of rows
     scanf("%d",&a);

     printf("\n");
     printf("\n");

     for(e=1;e<=a;e++){     //Intializing the loop

        for(b=1;b<=a-e;b++){  // To print number of spaces
            printf(" ");
        }
        d=e;
        f=2*e-1;
        for(c=1;c<=f;c++){    //To get the numbers at their respective pyramid places
            printf("%d",d%10);

            if(c<e){
                d++;
            }

            if(c>=e){
                d--;
        }
        }
        printf("\n");


     }

     printf("\n");
     printf("\n");


    return 0;
}

/*NAME   : K.Mohana Priya Nandini
ROLL NO: 22AE30015
SECTION: 2
ASSAIGNMENT NO:4
*/

#include<stdio.h>
int main()
{
   char A;
   printf("Enter the password");


   int n, sum=0;
   while (A!='\n');
   scanf("%c",A);
    if(A<'a'){

           printf("Invalid Password\n password must start with an upper case");
    }

       if(A==<'a'){

      printf("Invalid Password\n password must not include spaces ");
    }

    if (A!='$' || A!='&' || A!='%' || A!='@'){
        printf("Invalid Password\n password must have atleast one special charecter");

    }

    sum = sum + 1;
    if (sum<=8 || sum>=12){
        printf("Invalid Password\n password must be between 8 and 12 charecters");

    }
    else {
        printf ("Valid Password");

    }
